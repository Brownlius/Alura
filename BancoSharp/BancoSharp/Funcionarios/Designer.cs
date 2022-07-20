namespace BancoSharp.Funcionarios
{
    public class Designer : Funcionario
    {
        public Designer(string nome, string cpf) : base(nome, cpf, 3000)
        {

        }
        public override double GetBonificacao()
        {
            return Salario * 0.17;
        }
        protected override void AumentaSalario()
        {
            this.Salario *= 1.11;
        }
    }
}
