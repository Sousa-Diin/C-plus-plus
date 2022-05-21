/* Questão 2: Modularização - Apagamndo os mútiplos
 * copyright (c) 2022 - Wildes Sousa
 * version: v1.22
*/
#include <iostream>
using namespace std;

void apagaVet (int vet[], int t); // Apaga e exibe multiplos de 3
int main()
{
	int quant;
	cin >> quant;
	int num [quant];
	for (int i = 0; i < quant; i++)
	{
		cin >> num [i];
	}
	
	apagaVet (num,quant);
	
	return 0;
}
void apagaVet (int vet[], int t)
{
	int i, j = 0;
	for (i = 0; i < t; i++){
		if (vet [i] % 3 != 0) {
			cout << vet[i] << " ";
			j++;
		}
	}
	cout << "\n"<< j << endl;
		
}
