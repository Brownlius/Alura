namespace BancoSharp.Funcionarios
{
    public class Auxiliar : Funcionario
    {
        public Auxiliar(string nome, string cpf) : base(nome, cpf, 3000)
        {

        }
        public override double GetBonificacao()
        {
            return Salario * 0.20;
        }
        protected override void AumentaSalario()
        {
            this.Salario *= 1.1;
        }
    }
}
