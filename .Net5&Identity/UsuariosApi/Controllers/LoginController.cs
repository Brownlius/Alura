using FluentResults;
using Microsoft.AspNetCore.Mvc;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using UsuariosApi.Data.Requests;
using UsuariosApi.Services;

namespace UsuariosApi.Controllers
{
    [Route("[Controller]")]
    [ApiController]
    public class LoginController : ControllerBase
    {
        private LoginService _loginservice;

        public LoginController(LoginService loginservice)
        {
            _loginservice = loginservice;
        }
        [HttpPost]
        public IActionResult LogaUsuario(LoginRequest request)
        {
           Result resultado =  _loginservice.LogaUsuario(request);
           if (resultado.IsFailed) return Unauthorized(resultado.Errors) ; return Ok(resultado);

        }
    }
}
