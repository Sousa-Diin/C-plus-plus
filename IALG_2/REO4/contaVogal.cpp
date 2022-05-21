/* Questão 5: Vetores - String - Contar vogais
 * copyright © 2022 - Wildes Sousa
 * version: v3.22
 */
#include <iostream>
#include <string>
using namespace std;

int contaVogais (string palavra);
int main() {
	string palavra;
	cin >> palavra;
	
	cout << contaVogais(palavra);
	cout << endl;
	return 0;
}
int contaVogais ( string palavra)
{
	char vogais [5] {'a','e','i','o','u'};
	int soma_vogal = 0;
	int tam = palavra.size();
	for (int p = 0; p < tam; p++){
		for (int v = 0; v < 5; v++){
			if (palavra[p] == vogais[v]){
				soma_vogal++;
			}
		}
	}

	return soma_vogal;
	
}