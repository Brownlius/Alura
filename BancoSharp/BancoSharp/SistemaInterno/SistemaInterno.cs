using BancoSharp.Funcionarios;

namespace BancoSharp.SistemaInterno
{
    public class SistemaInterno
    {
        public bool logar(Autenticavel funcionario, string login, string senha)
        {
            bool autenticado = funcionario.Autenticar(login, senha);
            if (autenticado)
            {
                Console.WriteLine("Bem vindo ao Sistema!");
                return true;
            }
            else
            {
                Console.WriteLine("Senha incorreta.");
                return false;
            }
        }
    }
}
