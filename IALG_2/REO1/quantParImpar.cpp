/* Questão 9: Estrutura Condicional - Dígitos pares e impares
 * copyright © 2022, by Wildes Sousa ®
 * version: 1.0
 */
#include <iostream>
using std::cout;// o programa utiliza cout
using std::cin; // o programa utiliza cin
using std::endl;// o programa utiliza end

int main() {
	int numero; cin >> numero;
	// Separa as unidades
	int u = 0, d = 0, c =0, um = 0, dm = 0;
	dm = (numero / 10000)  % 10;
	um = (numero / 1000)  % 10;
	 c = (numero / 100)  % 10;
	 d = (numero / 10)  % 10;
	 u = (numero / 1)  % 10;

	// Verifica a Qnt. de Par e Impar
	int somaPar = 0, somaImpar = 0;
	if ( dm % 2 == 0)
		somaPar++;
	else
		somaImpar++;
	if ( um % 2 == 0)
		somaPar++;
	else
		somaImpar++;
	if ( c % 2 == 0)
		somaPar++;
	else
		somaImpar++;
	if ( d % 2 == 0)
		somaPar++;
	else
		somaImpar++;
	if ( u% 2 == 0)
		somaPar++;
	else
		somaImpar++;
	cout << somaPar << "\n"
		 << somaImpar << endl;
	return 0;
}