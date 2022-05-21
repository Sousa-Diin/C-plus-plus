#include <iostream>
using namespace std;

int main ()
{
	int procurado, t = 9;
	int vet[t];
	int i, posicao = -1;
	int pos_inicial = 0;
	int pos_final = t - 1;
	int meio;

	for (i = 0;i < t;i++){
		cin >> vet[i];
	}
	cin >> procurado;

	while (pos_inicial <= pos_final){
		meio = (pos_inicial + pos_final) / 2;
		if (procurado == vet[meio]){
			posicao = meio;
			pos_inicial = pos_final + 1;//Cond. Parada
		}else{
			if (procurado > vet[meio])
				pos_inicial = meio + 1;
			else
				pos_final = meio - 1;
	
		}
		
	}
	cout << vet[posicao] << "\t Posição: " << posicao << endl;
	return 0;
}
