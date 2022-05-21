#/* Questão 3: Vetores - Trocando elementos de dois vetores 
 * copyright © 2022, by Wildes Sousa 
 * version: v3.22
 */

#include <iostream>
//#include <string>
using namespace std;

void trocaVetor(char v0[],char v1[], int tam);
void saidaVetor (char v [], int tam);
int main()
{
    char tam = 10;
	char vet_A[tam];
	char vet_B[tam];
	
	
	for (int j = 0; j < tam; j++){
		cin >> vet_A [j];
	}
	
	for (int j = 0; j < tam; j++){
		cin >> vet_B [j];
	}
	
	//saidaVetor(vet_A, tam);
	trocaVetor(vet_A,vet_B, tam);
        
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
void trocaVetor (char v0[],char v1[], int tam)
{
	
	int i = 1;
	int j = tam - 1;
	while ((i < tam-1) and (i % 2 != 0) and (j >= tam/2))
	{
		char aux = v0[i-1];
		v0[i-1] = v1[j];
		v1[j] = aux;
		i+=2;
		j--;
	}
    
}

