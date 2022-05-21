#include <iostream>
#include <string.h>

using namespace std;
using std::string;

struct Carro
{	
	string nome;
	char placa[7];
	string marca;

};


Carro inicializa(Carro autoC [], const int tam);

int main()
{

	const int tam = 3;
	Carro automoveis [tam];
	
	bool continua = true;
	automoveis = inicializa(*automoveis, tam);
	int i = 0, e = 0;
	while (e < tam  and continua){
	
		cout << "MODELO: ";
		getline(cin,automoveis[e].nome) ;
		cout << endl;
		if (automoveis[e].nome == "-1"){
			continua = false;
			automoveis = inicializa(*automoveis, tam);
			
		}
		cout << " PLACA: ";
		for ( i = 0; i < 7;i++){
			cin >> automoveis[e].placa[i];
		}
		cin.ignore();
		cout << endl;
		cout << "MARCA: ";
		getline(cin, automoveis[e].marca);
		
		e++;
		cout << endl;
		
	}
	
	cout << ":::::::::::::::::::::::::SAIDA:::::::::::::::::::::::: \n";
	cout << "MODELO\t\t\t PLACA\t\tMARCA\n";
	for (int s = 0; s < tam; s++){
		cout << "\n " << automoveis[s].nome;
		cout << "\t\t";
		for (int j = 0; j < 7;j++){
			cout << automoveis[s].placa[j];
		}
		cout << "\t\t" << automoveis[s].marca;
	
	}
	cout << endl;
	
	return 0;
}

Carro inicializa (Carro autoC[], const int tam)
{
	
	for (int i = 0; i < tam; i++){
		autoC[i].nome = "VAZIO";
		for (int j = 0;j < 7;j++){
			autoC[i].placa[j] = '-';
		}
		autoC[i].marca = "VAZIO";
	}
	return autoC;
}

