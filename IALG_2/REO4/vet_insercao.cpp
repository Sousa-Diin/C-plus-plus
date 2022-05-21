/* Questão 4: Vetores - Inserção em um vetor
 * copyright (c) 2022 - Wildes Sousa
 * version: v1.22
*/
#include <iostream>
using namespace std;

#define tam 10

void insercao (int v [], int t, int insert, int p);
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
	insercao(vet, quantidade, entrada,posicao);
	cout << endl;
	
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
void insercao (int v [], int t, int insert, int p)
{
	for (int indiceD = t; indiceD >= insert;indiceD--){
		v[indiceD + 1] = v[indiceD]; 
	}
	
	v[p] = insert;
	for(int i = t+1; i < tam; i++){
		v[i] = 0;
	}
	
	imprimi (v, t);
}
