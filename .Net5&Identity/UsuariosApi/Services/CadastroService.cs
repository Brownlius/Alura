using AutoMapper;
using FluentResults;
using Microsoft.AspNetCore.Identity;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using UsuariosApi.Data.Dto;
using UsuariosApi.Data.Requests;
using UsuariosApi.Models;

namespace UsuariosApi.Services
{
    public class CadastroService
    {
        private IMapper _mapper;
        private UserManager<IdentityUser<int>> _userManager;
        private EmailService _emailService;

        public CadastroService(IMapper mapper, UserManager<IdentityUser<int>> userManager, EmailService emailService)
        {
            _mapper = mapper;
            _userManager = userManager;
            _emailService = emailService;
        }
        public Result CadastroUsuario(CreateUsuarioDto createUsuarioDto)
        {
            Usuario usuario = _mapper.Map<Usuario>(createUsuarioDto);
            IdentityUser<int> usuarioIdentity = _mapper.Map<IdentityUser<int>>(usuario);
            Task<IdentityResult> resultadoIdentity = _userManager
                .CreateAsync(usuarioIdentity, createUsuarioDto.Password);
            if (resultadoIdentity.Result.Succeeded)
            {
                var codigoEmail = _userManager
                    .GenerateEmailConfirmationTokenAsync(usuarioIdentity);

                _emailService.EnviarEmail(new[] { usuarioIdentity.Email},
                    "Link de ativação", usuarioIdentity.Id, codigoEmail);

                return Result.Ok().WithSuccess(codigoEmail.ToString());
            }
            return Result.Fail("Falha ao cadastrar usuário");
        }

        internal Result AtivaContaUsuario(AtivaContaRequest request)
        {
            var identityUser = _userManager
                .Users
                .FirstOrDefault(user => user.Id == request.UsuarioId);
            var idenitityResult = _userManager.ConfirmEmailAsync(identityUser, request.CodigoAtivacao).Result;
            if (idenitityResult.Succeeded) return 
                    Result.Ok();
            return Result.Fail("Falha ao ativar conta de usuário.");
            
        }
    }
}
