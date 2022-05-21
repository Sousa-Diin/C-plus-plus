/* Questão 1: Registros - Preços dos Carros
 * copyright (c) 2022 - Wildes Sousa
 * version: v1.22
 */
#include <iostream>
using namespace std;

struct Carros 
{
	string nome;
	int ano;
	int preco;

};

/* Prototipos das funções */
void listaMenores(Carros v[],int t, int preco);
//void saida (Carros v[], int t); 
int main(){

	int quant_car;
	cin >> quant_car;

	Carros cadastro[quant_car];
	
	for (int e = 0; e < quant_car; e++){
		cin >> cadastro[e].nome
			>> cadastro[e].ano
			>> cadastro[e].preco;
	}
	
	
	int consulta; // pesquisa pelo preco e lista valoes menores 
	cin >> consulta;
	
	listaMenores(cadastro, quant_car,consulta);
	//saida(cadastro,quant_car);
	return 0;
}

void listaMenores(Carros v[],int t, int preco)
{
	//int aux = 0; variavel teste
	for (int e = 0; e < t; e++){
		if (v[e].preco < preco){
			//saida (v,t); cout << endl;
			cout << v[e].nome << "\t" << v[e].ano << "\t" << v[e].preco << "\n";
			//aux++;
		}
	
	}
	//cout << aux << endl; // exibe quantidae de carros c/valores menores
}
/*
void saida (Carros v[], int t)
{
	if (t == 1){
		cout << v[t-1].nome << "\t" << v[t-1].ano << "\t" << v[t-1].preco << "\n";
	}
	else
		saida (v,t-1);
		cout << v[t-1].nome << "\t" << v[t-1].ano << "\t" << v[t-1].preco << "\n";
}*/
