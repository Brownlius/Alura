namespace BancoSharp.Funcionarios
{
    public class GerenteContas : Autenticavel
    {
        public GerenteContas(string nome, string cpf, string login, string senha) : base(nome, cpf, 4000)
        {
            Senha = senha;
        }
        public override double GetBonificacao()
        {
            return Salario * 0.25;
        }
        protected override void AumentaSalario()
        {
            this.Salario *= 1.05;
        }
        public string Senha { set; get; }

        public bool autenticar(string senha)
        {
            return this.Senha == senha;
        }
    }
}
