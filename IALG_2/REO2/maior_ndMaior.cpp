/* Questão: 8 Estrutura de repeticao - Maior e Segundo maior
 * copyright © 2022, by Wildes Sousa
 * date:16 /02/2022 || 10:16
 * version: 1.22.1
 */
#include <iostream>
using namespace std;

int main()
{
	int numero, soma = 0;
	int maior, ndMaior = 0;
	
	
	int i = 0;
	while (i < 7 )
	{
		
		cin >> numero;
		maior = numero;
		if ( numero >= maior ){
			maior = numero;
			ndMaior = maior;
		}else
			ndMaior = numero;
			
		soma += numero;
		i++;
	}
	cout << maior << "\n"
	     << ndMaior << "\n"
	     << (soma - (maior + ndMaior)) / 5 << endl;
	
	return 0;
}
