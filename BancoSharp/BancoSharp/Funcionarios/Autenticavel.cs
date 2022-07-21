namespace BancoSharp.Funcionarios
{
    public abstract class Autenticavel : Funcionario
    {
        public Autenticavel(string nome, string cpf, double salario) : base(nome, cpf, salario)
        {
        }

    }
}
