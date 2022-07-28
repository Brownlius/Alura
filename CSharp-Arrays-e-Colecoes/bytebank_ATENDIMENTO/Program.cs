using bytebank.Modelos.Conta;

Console.WriteLine("Boas Vindas ao ByteBank, Atendimento.");

Console.WriteLine();
Console.WriteLine("------------------Unidimensional------------------");
Console.WriteLine();

int[] idades = new int[5];
idades[0] = 30;
idades[1] = 20;
idades[2] = 65;
idades[3] = 87;
idades[4] = 35;

int somaIdades = 0;

for (int i = 0; i < idades.Length; i++)
{
    int idade = idades[i];
    Console.WriteLine($"Índice [{i}] = {idade}");
    somaIdades += idade;
}
Console.WriteLine("Soma das idades : " + somaIdades);

float mediaIdades = ((float)somaIdades / idades.Length);
Console.WriteLine("A média das idade : " + mediaIdades);

Console.WriteLine();
Console.WriteLine("------------------Bidimensional------------------");
Console.WriteLine();

int[,] _idade = new int[3, 2] { { 21, 0 }, { 20, 3 }, { 6, 0 } };

for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 2; j++)
    {
        Console.Write("{" + _idade[i, j] + "}, ");
    }
}

Console.WriteLine();
Console.WriteLine("------------------string------------------");
Console.WriteLine();

string[] palavras = new string[5] { "Abacaxi", "Bola", "Cebola", "Dínamo", "Einsten" };

for (int i = 0; i < palavras.Length; i++)
{
    Console.Write(palavras[i] + ", ");
}

Console.WriteLine();
Console.WriteLine("------------------double------------------");
Console.WriteLine();

double[] valores = { 2.6, 45.2, 5.6, 54, 1 };
for (int i = 0; i < valores.Length; i++)
{
    Console.Write(valores[i] + " ");
}
Console.WriteLine();
Console.WriteLine("------------------Percorrendo Array------------------");
Console.WriteLine();

string[] arrayPalavras = new string[3];

for (int i = 0; i < arrayPalavras.Length; i++)
{
    Console.Write($"Digite {i + 1}ª palavra: ");
    //arrayPalavras[i] = Console.ReadLine();
}
Console.Write("Digite a palavra a ser encontrada : ");
//var busca = Console.ReadLine();

//forEach();
//void forEach()
//{
//    bool palavraEncontrada = false;
//    int posicao = 0;

//    foreach (string palavra in arrayPalavras)
//    {
//        posicao++;

//        if (palavra.Equals(busca))
//        {
//            Console.WriteLine($"Palavra {busca} encontrada na posição {posicao}!");
//            palavraEncontrada = true;
//            break;
//        }
//    }
//    if (!palavraEncontrada)
//    {
//        Console.WriteLine("Palavra não encontrada.");
//    }
//}

Console.WriteLine();
Console.WriteLine("------------------Classe Array------------------");
Console.WriteLine();

Array amostra = Array.CreateInstance(typeof(double), 5);
amostra.SetValue(15, 0);
amostra.SetValue(5.6, 1);
amostra.SetValue(6.5, 2);
amostra.SetValue(1.5, 3);
amostra.SetValue(5.5, 4);
for (int i = 0; i < amostra.Length; i++)
{
    Console.Write(amostra.GetValue(i) + " ");
}
Console.WriteLine();
mediana(amostra);

void mediana(Array array)
{
    if (array == null || array.Length == 0)
    {
        Console.WriteLine("Array vazio ou nulo");
    }

    double[] numerosOrdenados = (double[])array.Clone();
    Array.Sort(numerosOrdenados);

    int tamanhoVetor = numerosOrdenados.Length;
    int meio = tamanhoVetor / 2;

    double mediana = ((tamanhoVetor % 2) != 0) ? numerosOrdenados[meio] :
                                                (numerosOrdenados[meio - 1] + numerosOrdenados[meio] / 2);
    Console.WriteLine("A mediana dos número acima calculada foi: " + mediana + ".");
}

Console.WriteLine();
Console.WriteLine("------------------Array de contas------------------");
Console.WriteLine();

void ArrayContaCorrente()
{
    ContaCorrente[] listaDeContas = new ContaCorrente[]
    {
        new ContaCorrente(875, "2511600-X"),
         new ContaCorrente(875, "2511600-X")
    };

    for (int i = 0; i < listaDeContas.Length; i++)
    {
        ContaCorrente contaAtual = listaDeContas[i];
        Console.WriteLine($"Índice {i} - Conta : {contaAtual.Conta}");
    }
}
ArrayContaCorrente();