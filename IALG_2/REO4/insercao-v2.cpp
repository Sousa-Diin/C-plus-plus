/* Questão 4: Vetores - Inserção em um vetor
 * copyright (c) 2022 - Wildes Sousa
 * version: v2.22
*/
#include <iostream>
using namespace std;

#define tam 10

void imprimi (int v[], int t);
int main()
{
	int vet [tam],quantidade;
	int entrada, posicao;
	//INICIALIZA VETOR COM 0
	for (int i = 0; i < tam; i++){
		vet[i] = 0;
	}
	cin >> quantidade;
	int i;
	for (i = 0; i < quantidade;i++){
		cin >> vet[i];
	}
	cin >> entrada >> posicao;
	//insercao(vet, tam, insercao,posicao);
	for (int indiceD = quantidade; indiceD >= posicao;indiceD--){
		vet[indiceD + 1] = vet[indiceD]; 
	}
	vet[posicao] = entrada;
	imprimi (vet, tam);
	return 0;
}
void imprimi (int v[], int t)
{
	if (t == 1)
		cout << v[t - 1] << " ";
	else{
		imprimi (v, t - 1);
		cout << v[t - 1] << " ";
	}	
}
