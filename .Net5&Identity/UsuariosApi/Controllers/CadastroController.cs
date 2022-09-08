using FluentResults;
using Microsoft.AspNetCore.Mvc;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using UsuariosApi.Data.Dto;
using UsuariosApi.Data.Requests;
using UsuariosApi.Services;

namespace UsuariosApi.Controllers
{
    [Route("[controller]")]
    [ApiController]
    public class CadastroController : ControllerBase
    {
        private CadastroService _cadastroService;
        public CadastroController(CadastroService cadastroService)
        {
            _cadastroService = cadastroService;
        }

        [HttpPost]
        public IActionResult CadastraUsuario(CreateUsuarioDto createUsuarioDto)
        {
            Result resultado = _cadastroService.CadastroUsuario(createUsuarioDto);
            if (resultado.IsFailed) return StatusCode(500); return Ok(resultado.Successes);
        }

        [HttpPost("/ativa")]
        public IActionResult AtivaContaUsuario(AtivaContaRequest request)
        {
            Result resultado = _cadastroService.AtivaContaUsuario(request);
            if (resultado.IsFailed) return StatusCode(500); return Ok(resultado.Successes);

        }
    }
}
