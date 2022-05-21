/* Questão 8: Operações básicas - Distância entre dois Pontos
 *
 * copyright (c) 2022, Wildes Sousa
 */
#include <iostream>
#include <cmath>

int main()
{
	float ponto_X1, ponto_X2, ponto_Y1, ponto_Y2;
    double	distancia = 0;

	std::cin >> ponto_X1
			 >> ponto_Y1
			 >> ponto_X2
			 >> ponto_Y2;
	distancia = (sqrt(pow((ponto_X2 - ponto_X1),2) + pow((ponto_Y2 - ponto_Y1), 2)));

	std::cout << std::fixed;
	std::cout.precision(5);	
	std::cout << distancia << std::endl;

	return 0;
}
