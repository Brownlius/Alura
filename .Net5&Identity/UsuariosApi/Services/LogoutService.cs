using FluentResults;
using Microsoft.AspNetCore.Identity;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace UsuariosApi.Services
{
    public class LogoutService
    {
        private SignInManager<IdentityUser<int>> _SigninManager;

        public LogoutService(SignInManager<IdentityUser<int>> signinManager)
        {
            _SigninManager = signinManager;

        }
        public Result DeslogaUsuario()
        {
            var resultadoIdentity = _SigninManager.SignOutAsync();
            if (resultadoIdentity.IsCompletedSuccessfully) return Result.Ok(); return Result.Fail("Logout falhou");
        }
    }
}
