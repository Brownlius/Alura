namespace BancoSharp.Funcionarios
{
    public class GerenteContas : FuncionarioAutenticavel
    {
        public GerenteContas(string nome, string cpf, string login, string senha) : base(nome, cpf, 4000, login, senha)
        {
        }
        public override double GetBonificacao()
        {
            return Salario * 0.25;
        }
        protected override void AumentaSalario()
        {
            this.Salario *= 1.05;
        }
    }
}
