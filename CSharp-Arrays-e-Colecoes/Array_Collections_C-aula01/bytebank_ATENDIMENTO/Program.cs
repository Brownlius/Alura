using bytebank.Modelos.Conta;

List<ContaCorrente> _listaDeContas = new()
{
    new ContaCorrente(235,"152-X"){Saldo = 100, Titular = new Cliente {Cpf = "11111", Nome = "Pedro"} }
};

List<ContaCorrente> _listaDeContas2 = new()
{
    new ContaCorrente(105,"152-Y"){Saldo = 800, Titular = new Cliente{Cpf="22222", Nome = "Nykole"} }
};

void Add()
{
    _listaDeContas.AddRange(_listaDeContas2);
    _listaDeContas.Add(new ContaCorrente(205, "152-Z") { Saldo = 200 });

    foreach (var item in _listaDeContas)
    {
        Console.WriteLine(item.Conta + " | " + item.Numero_agencia);
    }
}
Add();

void GetRange()
{
    int index = 0;
    int quantidade = 2;
    var range = _listaDeContas.GetRange(index, quantidade);

    foreach (var item in range)
    {
        Console.WriteLine(item.Saldo);
    }
}
GetRange();

void Reverse()
{
    _listaDeContas.Reverse();

    foreach (var item in _listaDeContas)
    {
        Console.WriteLine(item.Saldo + " | Invertido");
    }
}
Reverse();

List<string> nomesDosEscolhidos = new()
{
    "Bruce Wayne",
    "Carlos Vilagran",
    "Richard Grayson",
    "Bob Kane",
    "Will Farrel",
    "Lois Lane",
    "General Welling",
    "Perla Letícia",
    "Uxas",
    "Diana Prince",
    "Elisabeth Romanova",
    "Anakin Wayne"
};

string nomeDaVez = "Anakin Wayne";

foreach (var nome in nomesDosEscolhidos)
{
    if (nome == nomeDaVez)
    {
        Console.WriteLine("O escolhido está entre nós!");
    }
}
bool VerificaEscolhido(List<string> nomesDosEscolhidos, string escolhido)
{
    return nomesDosEscolhidos.Contains(escolhido);
}

Console.WriteLine(VerificaEscolhido(nomesDosEscolhidos, nomeDaVez).ToString());
Console.WriteLine("\n");
SortedList<int, string> times = new SortedList<int, string>();
times.Add(1, "Flamengo");
times.Add(2, "Santos");
times.Add(0, "Juventus");

foreach (var item in times.Values)
{
    Console.WriteLine(item);
}

Stack<string> minhlaPilhaDeLivros = new Stack<string>();
minhlaPilhaDeLivros.Push("Harry Porter e a Ordem da Fênix");
minhlaPilhaDeLivros.Push("A Guerra do Velho.");
minhlaPilhaDeLivros.Push("Protocolo Bluehand");
minhlaPilhaDeLivros.Push("Crise nas Infinitas Terras.");
Console.WriteLine("\n");
HashSet<int> _numeros = new HashSet<int>();
_numeros.Add(0);
_numeros.Add(1);
_numeros.Add(1);
_numeros.Add(1);
Console.WriteLine(_numeros.Count);// a saída é 2.

foreach (var item in _numeros)
{
    Console.WriteLine(item);
}

void RemoveConta()
{
    Console.WriteLine("Informe o número da conta: ");
    string numeroConta =  Console.ReadLine();
    ContaCorrente? conta = null;
    foreach (var item in _listaDeContas)
    {
        if (item.Conta.Equals(numeroConta))
        {
            conta = item;
        }

    }
    if(conta != null)
    {
        _listaDeContas.Remove(conta);
        Console.WriteLine(" Conta removida!");
    }
    else
    {
        Console.WriteLine(" Conta para remoção não encontrada");
    }
    Console.ReadKey();
}
RemoveConta();

void ordenaContas()
{
    _listaDeContas.Sort();
    foreach (var item in _listaDeContas)
    {
        Console.WriteLine(item.Numero_agencia);
    }
    Console.WriteLine("Lista ordenada!");
    Console.ReadKey();
}
ordenaContas();

void pesquisarContas(){
    Console.WriteLine("Pesquisar por Conta(1) ou por CPF(2):");
    switch (int.Parse(Console.ReadLine()))
    {
        case 1:
            {
                Console.WriteLine("Informe o número da conta: ");
                string _numeroConta = Console.ReadLine();
                var contasPorConta = consultaPorConta(_numeroConta);
                exibeLista((List<ContaCorrente>)contasPorConta);
                Console.ReadKey();
                break;
            }
        case 2:
            {
                Console.WriteLine("Informe o número do CPF: ");
                string _numeroCpf = Console.ReadLine();
                Console.WriteLine(consultaPorCpf(_numeroCpf).ToString());
                Console.ReadKey();
                break;
            }
        case 3:
            {
                Console.WriteLine("Informe o número da Agência: ");
                int _numeroAgencia = int.Parse(Console.ReadLine());
                var contasPorAgencia = consultaPorAgencia(_numeroAgencia);
                exibeLista((List<ContaCorrente>)contasPorAgencia);
                Console.ReadKey();
                break;
            }
    }

}

void exibeLista(List<ContaCorrente> contasPorAgencia)
{
    if (contasPorAgencia==null)
    {
        Console.WriteLine("Não encontrada conta com Agência informada.");
    }
    else
    {
        foreach (var item in contasPorAgencia)
        {
            Console.WriteLine(item.ToString());
        }
    }
}

object consultaPorAgencia(int? numeroAgencia)
{
    var consulta = (
                    from conta in _listaDeContas
                    where conta.Numero_agencia == numeroAgencia
                    select conta).ToList();
    return consulta;
}

object consultaPorConta(string? numeroConta)
{
    var consulta = (from conta in _listaDeContas
                    where conta.Conta == numeroConta
                    select conta).ToList();
    return consulta;
}

ContaCorrente consultaPorCpf(string? numeroCpf)
{
  return _listaDeContas.Where(conta=>conta.Titular.Cpf == numeroCpf).FirstOrDefault();
}

pesquisarContas();