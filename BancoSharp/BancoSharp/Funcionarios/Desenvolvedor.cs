using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace BancoSharp.Funcionarios
{
    public class Desenvolvedor : Funcionario
    {
        public Desenvolvedor(string nome, string cpf) : base(nome,cpf, 3500)
        {

        }
        public override double GetBonificacao()
        {
            return Salario * 0.20;
        }
        protected override void AumentaSalario()
        {
            this.Salario *= 1.30;
        }
    }
}
