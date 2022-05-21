/* Questão 5: Estrutura Condicional - Crédito Especial
 * copyright © 2022, by Wildes Sousa 
 * version: 1.2
 */
#include <iostream>

int main()
{
    	float saldo_M;
	std::cin >> saldo_M;

	std::cout.precision(2); std::cout << std::fixed;

	if (saldo_M > 1600)
	    std::cout << saldo_M << "\n" << (0.3 * saldo_M) << "\n";
	else if (saldo_M > 800)
	    std::cout << saldo_M << "\n" << (0.25 * saldo_M) << "\n";
	else if (saldo_M > 400)
	    std::cout << saldo_M << "\n" << (0.2 * saldo_M) << "\n";
	else if (saldo_M > 200)
	    std::cout << saldo_M << "\n" << (0.15 * saldo_M) << "\n";
	else if (saldo_M > 0)
	    std::cout << saldo_M << "\n" << (0.1 * saldo_M) << "\n";
	else
	    std::cout << saldo_M  << "\n" << (0 * saldo_M) << std::endl;

      
   	 return 0 ;
}

