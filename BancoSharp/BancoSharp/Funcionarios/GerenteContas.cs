namespace BancoSharp.Funcionarios
{
    internal class GerenteContas : Funcionario
    {
        public GerenteContas(string nome, string cpf) : base(nome, cpf, 4000)
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
