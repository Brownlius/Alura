﻿namespace BancoSharp.Funcionarios
{
    public class Diretor : Funcionario
    {
        public Diretor(string nome, string cpf) : base(nome, cpf, 5000)
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
