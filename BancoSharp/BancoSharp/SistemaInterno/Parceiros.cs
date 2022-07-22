using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace BancoSharp.SistemaInterno
{
    public class Parceiros : I_Autenticavel
    {
        public string Login { get; protected set; }
        public string Senha { get; protected set; }
        public bool Autenticar(string login, string senha)
        {
            if (Login == login && Senha == senha)
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
