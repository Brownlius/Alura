using BancoSharp.SistemaInterno;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace BancoSharp.Funcionarios
{
    public abstract class FuncionarioAutenticavel : Funcionario, I_Autenticavel
    {
        protected FuncionarioAutenticavel(string nome, string cpf, double salario, string login, string senha) : base(nome, cpf, salario)
        {
            Login = login;  
            Senha = senha;  
        }

        public string Login { get; protected set; }
        public string Senha { get; protected set; }

        public bool Autenticar(string login, string senha)
        {
            if(Login==login && Senha == senha)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
}
