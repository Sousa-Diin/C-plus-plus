/* Questão 6: Estrutura Condicional - Maiúscula ou Minúscula
 * copyright © 2022, by Wildes Sousa 
 * version: 1.0
 * Ps: USEI O TERNARIO AFINS DIDÁTICO
 */
#include <iostream>
//#include <ctype.h>

int main()
{
	char letra; 
	std::cin >> letra;

	//Operador Condicional ternario
	isupper(letra) ? (std::cout << "MAIUSCULA\n" ) : ( std::cout << "MINUSCULA\n" );
/*
	if (isupper(letra))
		std::cout << "MAIUSCULA\n";
	else
		std::cout << "MINUSCULA" << std::endl;
*/
	return 0 ;
}

