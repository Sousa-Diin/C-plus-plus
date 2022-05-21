/*Questão 4: Operações básicas - Área do trapézio
 *
 * copyright (c) 2022, Wildes Sousa.
 */
#include <iostream>

int main(){

	float B_menor, B_maior, altura;
	std::cin >> B_maior >> B_menor >> altura;

	double A_trapezio = ((B_maior + B_menor) * (altura /(float)2));

	std::cout << A_trapezio << std::endl;
	return 0;
}
