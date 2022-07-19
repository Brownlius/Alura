using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace BancoSharp.Funcionarios
{
    public class Funcionario
    {
        public Funcionario(string _tipoFuncionario)
        {
            this._tipoFuncionario = _tipoFuncionario;
        }

        private string _tipoFuncionario;
        public string Nome { get; set; }
        public string Cpf { get; set; }
        public double Salario { get; set; }
        
        public double GetBonificacao()
        {
            switch (_tipoFuncionario) 
            { 
            case "DIR":
                return Salario * 0.9;

            case "CAI":
                return Salario * 0.1;
                        
            case "GER":
                return Salario * 0.3;
            }
            return 0;
        }
    }
}
