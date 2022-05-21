/* Questão 5: Operações básicas - Número de degraus
 * copyright © 2022, by Wildes Sousa
 * version: 1.1
 */
#include <iostream>
#include <cmath>

int main ()
{
	float alt_degraus, alt_desejada;
	std::cin >> alt_degraus
			 >> alt_desejada;

	alt_desejada *= (float)100;

	std::cout << (ceil)(alt_desejada / alt_degraus) << std::endl;
	return 0;
}
