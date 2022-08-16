using bytebank.Modelos.Conta;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace bytebank_ATENDIMENTO.bytebank.Util
{
    public class ListaCCorrentes
    {
        private ContaCorrente[] _items = null;
        private int _proximaPosicao = 0;
        private void VerificaCapacidade(int tamanhoNecessario)
        {
            if (_items.Length >= tamanhoNecessario)
            {
                return;
            }
            Console.WriteLine("Aumentando lista.");
            ContaCorrente[] NovoArray = new ContaCorrente[tamanhoNecessario];

            for (int i = 0; i < _items.Length; i++)
            {
                NovoArray[i] = _items[i];
            }
            
            _items = NovoArray;
        }
        public ListaCCorrentes(int tamanhoInicial = 5)
        {
            _items = new ContaCorrente[tamanhoInicial];
        }
        public void Adicionar(ContaCorrente item)
        {
            VerificaCapacidade(_proximaPosicao + 1);
            _items[_proximaPosicao] = item;
            Console.WriteLine($"Adicionado item na posição {_proximaPosicao}");
            _proximaPosicao++;
        }
        public ContaCorrente MaiorSaldoDaLista()
        {
            double maiorSaldo = 0;
            ContaCorrente ContaMaiorSaldo = null;
            for (int i = 0; i < _items.Length; i++)
            {
                if (_items != null)
                {
                    if (_items[i].Saldo > maiorSaldo)
                    {
                        maiorSaldo = _items[i].Saldo;
                        ContaMaiorSaldo = _items[i];
                    }
                }
            }
            return ContaMaiorSaldo;
        }
        public void Remover(ContaCorrente conta)
        {
            int indiceItem = -1;
            for (int i = 0; i < _proximaPosicao; i++)
            {
                ContaCorrente ContaAtual = _items[i];
                if(ContaAtual == conta)
                {
                    indiceItem = i;
                    break;
                }
            }
            for (int i = indiceItem; i < _proximaPosicao - 1; i++)
            {
                _items[i] = _items[i + 1];
            }
            _proximaPosicao--;
            _items[_proximaPosicao] = null;
        }
        public void ExibirLista()
        {
            for (int i = 0; i < _items.Length; i++)
            {
                if (_items[i] != null)
                {
                    var conta = _items[i];
                    Console.WriteLine($"\nÍndice {i} : \n" +
                        $"Conta : {conta.Conta} | " +
                        $"Nº Agencia : {conta.Numero_agencia} | " +
                        $"Saldo : {conta.Saldo} | " +
                        $"Titular : {conta.Titular} | ");
                }
            }
        }
        public ContaCorrente GetContaPeloIndice(int indice)
        {
            if((indice < 0) || (indice >= _proximaPosicao))
            {
                throw new ArgumentOutOfRangeException(nameof(indice));  
            }
            return _items[indice];
        }
        public int Tamanho {
            get
            {
                return _proximaPosicao;
            }
        }
        public ContaCorrente this[int indice]
        {
            get
            {
                return GetContaPeloIndice(indice);
            }
        }
    }
}
