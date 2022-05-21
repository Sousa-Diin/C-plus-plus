/* Questão 3: Estrutura Condicional - Passatempo dos bandeirantes
 * copyright © 2022, by Wildes Sousa 
 * version: 1.0
 */
#include <iostream>

int main()
{
	std::string cor1, cor2;
	int num;
	std::cin >> cor1
		 >> cor2
		 >> num;
	//LÓGICA PALINDROMO - separação das unidades
	int u = 0, d = 0, c = 0, um = 0, dm = 0, cm = 0;
	cm = ((num / 100000) % 10);
	dm = ((num / 10000) % 10);	
	um = ((num / 1000) % 10);
	c =  ((num / 100) % 10);
	d =  ((num / 10) % 10);
	u =  ((num / 1) % 10);

	//Avalia se o numero é palindromo
	if (cm == u and dm == d and um == c)
		std::cout << cor1 << std::endl;
	else 
		std::cout << cor2 << std::endl; 

	return 0 ;
}
