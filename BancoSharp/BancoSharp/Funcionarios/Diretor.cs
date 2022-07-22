namespace BancoSharp.Funcionarios
{
    public class Diretor : FuncionarioAutenticavel
    {
        public Diretor(string nome, string cpf, string login, string senha) : base(nome, cpf, 5000, login, senha)
        {
        }
        public override double GetBonificacao()
        {
            return Salario * 0.5;
        }
        protected override void AumentaSalario()
        {
            this.Salario *= 1.15;
        }

    }
}
