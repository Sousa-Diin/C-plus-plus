/* Questão 8: Vetores - Número Perfeito
 * copyright (c) 2022 - Wildes Sousa
 * version: v1.22
*/
#include <iostream>
#include <cstring>
using namespace std;

void saida (int v[], int t);
void entrada (int v[], int t);
int main()
{
	int num;
	cin >> num;
	
	int tam = 10;
	int n_per [tam];
	for (int i = 0; i < tam; i++){
		n_per[i] = 0;
	}
	entrada (n_per , tam);
	int quant, pos;
	cin >> quant;
	
	for (int indiceD = 0; indiceD < quant; indiceD++){
		n_per[indiceD] = quant * indiceD;
	}
	cin >> pos;
	for (int pass = quant;pass >= pos;pass--){
		n_per[pass + 1] = n_per[pass];
	}
	n_per[pos-1] = 28;
	
	saida (n_per,tam-1);
	n_per[pos] = 27;
	
	cout << "Depois\n";
	saida (n_per,tam-1);
	
	return 0;
}
void saida (int v[], int t)
{
	if (t == 1)
		cout << v[t - 1] << " ";
	else
		saida(v, t - 1);
		cout << v[t -1] << " ";
}
void entrada (int v[], int t)
{
	if (t == 1)
		v[t - 1] = 1;
	else
		saida(v, t - 1);
		v[t -1] = 1;
}
