#include <iostream>
using namespace std;



void troca(int v[], int begin, int end);
void mostra (int v [], int tam);
int main()
{
	int tam = 4;
	int vet [tam];
	for (int i = 0; i < tam; i++)
		cin >> vet[i];
	troca(vet, 0 , 3);
	mostra (vet, tam);
	return 0;
}
void troca(int v[], int begin, int end)
{
	int aux;
	if (begin < end){
		aux = v[begin];
		v[begin] = v[end];
		v[end] = aux;
		troca(v, begin + 1, end -1 );
	}
}
void mostra (int v [], int tam)
{
	if (tam == 1 )
		cout << v[tam - 1] << " ";
	else{
		mostra(v ,tam - 1);
		cout << v [tam - 1] << " ";
	}
}
