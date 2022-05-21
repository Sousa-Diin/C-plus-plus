#include <iostream>
using namespace std;

void ajustarVetor(double fator, double vet[],int tam);
void mostraVetor (const double vet [],int tam );
int lerVetor (double vet[], int tam);
int main()
{
	const int max = 5;
	double imoveis[max];
	
	int tam = lerVetor(imoveis,max);
	mostraVetor(imoveis,tam);
	
	cout << "Digite o fator de ajuste: ";
	double ajuste;
	cin >> ajuste;
	ajustarVetor(ajuste, imoveis, tam);
	mostraVetor(imoveis, tam);
/*
	int vetA [] {2, 7 ,15, 8, 4};
	int vetB [] {6, 1 ,12, 5, 3};
	int vetC[5];
	//int tam = sizeof(vetA);
	
	int aux = vetA[0];
	vetA[0] = vet[2];
	vetA[2] = aux;
	
	
	cout << "\n";
	
	int j =0;
	while (j < 5) {
		if (vetA[j] % 2 != 0)
			vetB [0][j]= vetA[j];
		j++;
	}
	for (i = 0; i < 5;i++){
		cout << vetB[i] << " ";
	}*/
	
	
	cout <<endl;
	return 0;
}
int lerVetor (double vet[], int tam)
{
	double temp;
	int i = 0;
	cout << "Digite valor #1: ";
	while (cin >> temp && i < tam && temp >= 0)
	{
		vet [i++] = temp;
		cout << "Digite valor #" << (i+1) << ": ";
	}
	if (cin.fail()){
		cin.clear();
		while (cin.get() != '\n')
			continue;
		cout << "Entrada inválida. Leitura encerrada!\n";
	}
	return i;
}
void mostraVetor (const double vet [],int tam )
{
	for (int i = 0; i < tam; i++){
		cout << "Imovél #" << (i+1) << ": R$";
		cout << vet [i] << endl;
	}
}
void ajustarVetor(double fator, double vet[],int tam)
{
	for (int i = 0; i < tam; i++){
		vet[i] *= fator;
	}
}

	
	
