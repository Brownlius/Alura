﻿using BancoSharp.Funcionarios;
using BancoSharp.SistemaInterno;

Console.WriteLine("\t---------------Wecolme to the club!---------------\n\n");



Funcionario F301 = new Designer("Pedro", "043159412310");

Funcionario F401 = new Desenvolvedor("Nykole", "32569847150");

Funcionario F501 = new Auxiliar("Pexeira", "65423978450");

F401.mostraInfosFuncionarios();
UsarSistema();


Console.ReadKey();


void UsarSistema()
{
    SistemaInterno sistemaInterno = new();

    Funcionario F101 = new Diretor("Claudio", "Claudin", "056874125630", "123456");

    Funcionario F201 = new GerenteContas("Antonio", "Tonin", "32654123520", "654321");

    sistemaInterno.logar((Diretor)F101, "Claudin", "123456");
    sistemaInterno.logar((GerenteContas)F201, "Tonin", "159753");
}













































































































































































































































































































































































































































































































































































































































































































































































































































