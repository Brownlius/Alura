using System;


class Program
{
    static void Main(string[] args)
    {
        Console.WriteLine("\n\tAprendendo variáveis");
        int idade;
        idade = 27 - 6;
        Console.WriteLine("A idade é: " + idade);


        double salario;
        salario = 1212.0 * (30.0 / 100 + 1);
        int salarioInt = (int)salario; // Conversao
        Console.Write(salarioInt);

        //16 bits
        short z = 9000;

        //32 bits
        int x = 900000000;
        float altura = 1.79f;

        //64 bits
        long y = 9000000000000000000;
        double altura2 = 1.79;

        Console.WriteLine("\n\n Caracteres! \n");
        char letra = 'a';
        Console.WriteLine(letra);

        char outraLetra = (char)66;
        Console.WriteLine(outraLetra);

        string frase = "Que a paz esteja convosco. ";
        Console.WriteLine(frase + z);

        int idadePedro = 16;
        Console.WriteLine(" Quantos anos tem? ");

        int qtdPessoas = 2;
        bool acompanhado = qtdPessoas > 1;


        if (idadePedro >= 18)
        {
            Console.WriteLine("\n Entra aí, cupincha! ");
        }
        else if (idadePedro >= 16 && idadePedro < 18 && acompanhado)
        {
            Console.WriteLine("\n Entra aí, ta com os brothers!");
        }
        else
        {
            Console.WriteLine("\nCai fora, pirralho!");
        }
        float aliquota;
        float salarioIRPF = 3964.58f;

        if (salarioIRPF <= 1903.98)
        {
            Console.WriteLine("\n Aproveite. Está isento!");

        }
        else if (salarioIRPF > 1903.98 && salarioIRPF <= 2826.65)
        {
            aliquota = 7.5f;
            Console.WriteLine("\n Passa pra cá, " + aliquota + "% !  ");

        }
        else if (salarioIRPF > 2826.65 && salarioIRPF <= 3751.05)
        {
            aliquota = 15f;
            Console.WriteLine("\n Passa pra cá, " + aliquota + "% !  ");

        }
        else if (salarioIRPF > 3751.05 && salarioIRPF <= 4664.68)
        {
            aliquota = 22.5f;
            Console.WriteLine("\n Passa pra cá, " + aliquota + "% !  ");
        }
        else if (salarioIRPF > 4664.68)
        {
            aliquota = 27.5f;
            Console.WriteLine("\n Passa pra cá, " + aliquota + "% !  ");

        }

        int mes = 1;

        while (mes <= 12)
        {
            Console.WriteLine("Flamengo não é time, não!");
            mes++;
        }
        for (int i = 0; i < 12; i++)
        {

            Console.WriteLine("Flamengo é seleção");
        }
        float juros = 1.0f;
        for (int ano = 0; ano < 3; ano++)
        {
            for (int mes1 = 0; mes1 < 12; mes1++)
            {
                juros += 5.0f/100;
                Console.Write(juros);
                break;
            }
        }
                                                 
        for (int i = 1 ; i <= 100; i++)
        {
            if (i % 7.5 == 0)
            {
                Console.WriteLine(i);
                
            }
        }
    }
}