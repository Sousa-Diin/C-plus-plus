/* Questão 2: Estrutura Condicional - Peso Ideal
 * copyright © 2022, by Wildes Sousa 
 * version: 1.0
 */
#include <iostream>

int main()
{
	char sexo;
	float altura;
    double ideal_P = 0;
	
	std::cin >> sexo >> altura;
	switch (sexo )
	{
		case 'M':
		case 'm':
			ideal_P = ((72.7 * altura) - 58);
			break;
		case 'F':
		case 'f':
			ideal_P = ((62.1 * altura) - 44.7);
			break;
	}
     std::cout << ideal_P << std::endl;
    return 0 ;
}
