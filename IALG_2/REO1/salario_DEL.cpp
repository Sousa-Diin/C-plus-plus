/* Questão 3: Operações básicas - Conversão de salátio
 * salario_DEL (*DEL - Dólar, Euro, Libra).
 * copyright (c) 2022, Wildes Sousa
 */
#include <iostream>
#include <iomanip>

int main(void)
{
	float salario; std::cin >> salario;

	std::cout << std::fixed << std::setprecision (2);
	std::cout << salario/(float)2.13 <<"\n" << salario/(float)2.84 <<"\n" << salario/(float)3.34 << std::endl;
}
