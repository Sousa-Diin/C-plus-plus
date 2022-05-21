/* Questão 1: Estrutura Condicional - D
ivisão e Resto
 * copyright © 2022, by Wildes Sousa 
 * version: 1.0
 */
#include <iostream>

int main()
{
	//ENTRADA DE DADOS
	int dividendo, divisor, aux = 0;
	std::cin >> dividendo >> divisor;
	
	//TROCA 
	if (dividendo  < divisor)
	{
		aux = dividendo;
		dividendo = divisor;
		divisor = aux;
	}
	//PROCESSADOR	
	if (divisor == 0)
	{
		std::cout << "erro" << std::endl;
	}
	else
		std::cout << (dividendo / divisor) << "\n"
		   		  << (dividendo % divisor)	
				  << std::endl;
	
	
		
	//SAIDA DE DADOS
//    std::cout <<  << std::endl;
    return 0 ;
}

