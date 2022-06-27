#include <iostream>
#include <string>
#include <string_view>
#include "src/Leilao.hpp"
#include "src/Usuario.hpp"
#include <memory>

using namespace std;

class String {
private:
	char* data;
	size_t size;
public:
	String(const char* string) {
		cout << "String criada" << endl;
		size = strlen(string);
		data = new char[size];
		memcpy(data, string, size);
	}
	~String() {
		delete data;
	}
};

class User {
private:
	String nome;
public:
	User(const String& string) :nome(string)
	{

	}
};

void* operator new(size_t bytes)
{
	std::cout << "Alocando " << bytes << " bytes" << std::endl;
	return malloc(bytes);
}

void escreveNome(string_view nome) {
	cout << nome << endl;
}
int main() {
	std::cout << "--------------------------" << std::endl;
	std::string nomeCasal= "Pedro Henrique Souza de Almeida & Nykole da Trindade Borowski";
	//string meuNome = nomeCasal.substr(0, nomeCasal.find('&') - 1);
	//string nomeDela= nomeCasal.substr(nomeCasal.find('&') + 2);

	string_view meuNome2(nomeCasal.c_str(), nomeCasal.find('&') - 1); 
	string_view nomeDela2(nomeCasal.c_str() + nomeCasal.find('&') + 2);
	

	//cout << meuNome << endl << nomeDela << endl;
	escreveNome(meuNome2);
	escreveNome(nomeDela2 );

	Leilao leilao("Uno com escada em cima");
	Usuario usuario("Pedro Almeida");
	Usuario usuario2("Nykole Borowski");
	//shared_ptr<Usuario> usuario = make_shared<Usuario>("Pedro Almeida");
	usuario.recuperaPrimeiroNome();
	escreveNome(usuario.recuperaPrimeiroNome());	
	escreveNome(usuario2.recuperaPrimeiroNome());

	return 0;
}