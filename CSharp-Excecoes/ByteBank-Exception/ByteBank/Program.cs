using System;

namespace ByteBank
{
    class Program
    {

        static void Main(string[] args)
        {
            try
            {
                ContaCorrente conta1 = new ContaCorrente(4564, 789684);
                ContaCorrente conta2 = new ContaCorrente(7891, 456794);

                // conta1.Transferir(10000, conta2);
                conta1.Sacar(10000);
            }
            catch (OperacaoFinanceiraException e)
            {
                Console.WriteLine(e.Message);
                Console.WriteLine(e.StackTrace);

                Console.WriteLine("Informações da INNER EXCEPTION (exceção interna):");

                Console.WriteLine(e.InnerException.Message);
                Console.WriteLine(e.InnerException.StackTrace);
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
