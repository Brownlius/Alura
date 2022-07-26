using System;

namespace ByteBank
{
    class Program
    {

        static void Main(string[] args)
        {
            try
            {
                ContaCorrente Conta1 = new ContaCorrente(1540, 320);
                Conta1.Depositar(50);
                Console.WriteLine(Conta1.Saldo);
                Conta1.Sacar(500);
                Console.WriteLine(Conta1.Saldo);
            }
            catch (ArgumentException Ex)
            {
                Console.WriteLine("Erro no parâmetro: " + Ex.ParamName);
                Console.WriteLine("Ocorreu um Argument Exception");
                Console.WriteLine(Ex.Message);
            }
            catch (SaldoInsuficienteException Ex)
            {
                Console.WriteLine(Ex.Message);
            }

            try
            {
                Metodo(10,0); //1º
            }
            catch (DivideByZeroException)
            {
                Console.WriteLine("ERROOU! Não é possível fazer divisão por zero. ");
            }
            catch (NullReferenceException)
            {
                Console.WriteLine("Erro de referência nula. ");
            }
          
            Console.ReadLine(); //5º
        }
        private static void Metodo(int dividendo, int divisor) //2º
        {
            TestaDivisao(dividendo, divisor);

        }
        private static void TestaDivisao(int dividendo, int divisor) //3º
        {
            double resultado = DividirPorDez(dividendo, divisor);
        }   

        private static double DividirPorDez(int dividendo, int divisor) //4º
        {
            try
            {
                return dividendo / divisor;
            }
            catch
            {
                Console.WriteLine("Exceção com número = " + dividendo + " e divisor = " + divisor);
                throw;
            }
        }






    }
}
