/* Questão 6: Vetores - String - Palavras Justificadas
 * copyright (c) 2022 - Wildes Sousa
 * version: v2.22
*/
#include <iostream>
#include <string>
using namespace std;

void entrada (string palavra[],int t, int &maior_t );
void ajuste (string palavra[], int maior);
void saida (string palavra[], int t);
int main()
{
	int maior_tam = 0, tam;
	cin >> tam;

	string palavras[tam];
	entrada(palavras,tam,maior_tam);
	//cout << maior_tam << endl;//Teste
	ajuste(palavras,maior_tam);
	saida( palavras, tam);
	
	
	return 0;
}
void ajuste (string palavra[], int maior)
{
	for (int i = 0; i < maior; i++){
		int dif, tam;
		tam = palavra[i].size();
		if ( tam < maior){
			dif = maior - tam;
			for (int k = 0; k < dif; k++){
				palavra[i].insert(0, "*");
			}
		}
	}	
	
	
}
void entrada (string palavra[],int t, int &maior_t )
{
	
	for (int i = 0; i < t; i++){
		cin >> palavra[i];
		int str_t = palavra[i].size();
		//CAPTURA O MAIOR TAMANHO DA STRING
		
		if (str_t > maior_t){
			maior_t = str_t;
		}
	}
}
void saida (string palavra[], int t)
{
	if (t == 1)
		cout << palavra[t - 1] << endl;
	else{
		saida (palavra, t - 1);
		cout << palavra[t - 1] << endl;
	}

	
}
/*SOLUCAO DA REVISÃO || NÃO COMPILA*/
/*
	for (int i = 0; i < maior; i++){
		int tam = palavra[i].size();
		if (tam < maior){
			int space = maior - tam;
			int j = maior - 1;
			while (j - space >= 0){
				palavra[i].[j] = palavra[i].[j - space];
				j--;
			}
		}
	}
*/
// AJUSTAR TRECHO DE CÓDIGO
/*

	unsigned j = 0;
	while (palavra[j].length() < maior-1 ){
	//cout<<palavra[i].length(); //Teste
		unsigned tam = palavra[j].size();
		//for (unsigned i = 0;i < tam;i++){
			
			if (tam < maior){
				unsigned dif = maior - tam;			
			}
		//}
		palavra[j].insert(j, "*");
		j++;
*/
