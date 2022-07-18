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
        public CCorrente(int numeroAgencia, string nomeAgencia)
        {
            numeroAgencia = NumeroAgencia;
            nomeAgencia = nomeAgencia;
        }

        public Titular Titular { get; set; }
        public string Conta { get; set; }

        private int _numeroAgencia;
        public int NumeroAgencia 
        { 
            get
            {
                return _numeroAgencia;
            }
            set
            {
                if(value <= 0)
                {
                    return;
                }
                else
                {
                    _numeroAgencia = value;
                }
            }
        }

        public string nomeAgencia { get; set; }

        private double _saldo;
        public double Saldo
        {
            get
            {
                return _saldo;
            }
            set
            {
                if (value < 0)
                {
                    return;
                }
                _saldo = value;
            }
        }

        public bool Sacar(float valor)
        {
            
            if (_saldo < valor)
            {
                return false;
            }
            else
            {
                _saldo -= valor;
                return true;
            }
        }

        public void depositar(float valor)
        {
            _saldo += valor;
        }

        public void Transferir(float valor, CCorrente conta)
        {
            Sacar(valor);
            conta.depositar(valor);
        }

        
   
    }
}
