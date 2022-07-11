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
        int   x = 900000000;
        float altura = 1.79f;

        //64 bits
        long  y = 9000000000000000000;
        double altura2 = 1.79;

        Console.WriteLine("\n\n Caracteres! \n");
        char letra = 'a';
        Console.WriteLine(letra);

        char outraLetra = (char)66;
        Console.WriteLine(outraLetra);

        string frase = "Que a paz esteja convosco. ";
        Console.WriteLine(frase + z);

        int idadePedro;
        Console.WriteLine(" Quantos anos tem? ");
        Console.ReadLine(idadePedro);

        if(idadePedro >= 18)
        {
            Console.WriteLine("\n Entra aí, cupincha! ");
        }else{
            Console.WriteLine("\n Sai daqui pentelho!!");
        }
    }
}
