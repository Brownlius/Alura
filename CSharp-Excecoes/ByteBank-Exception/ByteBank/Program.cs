using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using ByteBank;

namespace ByteBank
{
    class Program
    {
        static void Main(string[] args)
        {
            ContaCorrente conta1 = new ContaCorrente(7458, 654231);
            Console.WriteLine(ContaCorrente.TotalDeContasCriadas);

            conta1.Divisao(10, 0);
            Console.ReadLine();
        }
    }
}
