namespace BancoSharp.Funcionarios
{
    public abstract class Funcionario
    {
        public static int TotalFuncionarios { get; private set; }
        public Funcionario(string nome, string cpf, double salario)
        {
            Nome = nome;
            Cpf = cpf;
            Salario = salario;
            TotalFuncionarios++;
        }
        public string Nome { get; protected set; }
        public string Cpf { get; protected set; }
        public double Salario { get; protected set; }
        public string Login { get; protected set; }
        public string Senha { set; get; }
        public abstract double GetBonificacao();
        protected abstract void AumentaSalario();
        public void mostraInfosFuncionarios()
        {
            Console.WriteLine(" Nome do Funcionário: " + Nome);
            Console.WriteLine(" CPF: " + Cpf);
            Console.WriteLine(" Salário: " + Salario);
        }
        
        public bool Autenticar(string login, string senha)
        {
            if((Login == login) && (this.Senha == senha))
            {
                return true;
            }
            return false;
        }


    }
}
