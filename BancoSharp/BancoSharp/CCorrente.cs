using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

using BancoSharp.Cliente;
using BancoSharp;

namespace BancoSharp
{   
    public class CCorrente
    {
        public Titular titular;
        public string conta;
        public int numeroAgencia;
        public string nomeAgencia;
        public double saldo;

        public bool Sacar(float valor)
        {
            
            if (saldo < valor)
            {
                return false;
            }
            else
            {
                saldo -= valor;
                return true;
            }
        }
    public void depositar(float valor)
        {
            saldo += valor;
        }
        public void Transferir(float valor, CCorrente conta)
        {
            Sacar(valor);
            conta.depositar(valor);
        }
    }
}
