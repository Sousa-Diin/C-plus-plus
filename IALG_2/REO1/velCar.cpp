/* Questão 10: Operações básicas - Velocidade do Carro
 * copyright (C) 2022, Wildes Sousa
 */
#include <iostream>
#include <math.h>

#define aproxVel 14.6
int main()
{
//	const double aproxVel = 14.6;
	float comp_Der;
	double velCar = 0;

	std::cin >> comp_Der;

	velCar = (aproxVel * sqrt(comp_Der));

	std::cout.precision(3);
	std::cout<< std::fixed;
	std::cout << velCar << std::endl;
	return 0;
}
