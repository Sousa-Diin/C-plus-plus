#/* Questão 3: Vetores - Trocando elementos de dois vetores 
 * copyright © 2022, by Wildes Sousa 
 * version: v3.22
 */

#include <iostream>
//#include <string>
using namespace std;

void trocaVetor(char v0[],char v1[], int ini, int fim);
void saidaVetor (char v [], int tam);
int main()
{
    int tam = 10;
	char vet_A[tam];
	char vet_B[tam];
	
	
	for (int j = 0; j < tam; j++){
		cin >> vet_A [j];
	}
	
	for (int j = 0; j < tam; j++){
		cin >> vet_B [j];
	}
	
	//saidaVetor(vet_A, tam);
	trocaVetor(vet_A,vet_B, 0, 9);
        
    saidaVetor (vet_A, tam);
	cout << endl;
	saidaVetor (vet_B, tam);
	
    return 0 ;
}

void saidaVetor (char v [], int tam)
{
        if (tam == 1 )
                cout << v[tam - 1] << " ";
        else{
                saidaVetor(v ,tam - 1);
                cout << v [tam - 1] << " ";
        }
}
void trocaVetor (char v0[],char v1[], int ini, int fim)
{
	for (int i = 0; i <= fim ; i++){
		int j = 0;
		while ( fim > j ){
			if (i % 2 == 0){
				char aux = v1[fim];
				v1[fim--] = v0 [i++];
				v0[i--] = aux;
			}
			fim--;
		}
	}
}
