/* Questão 9: Operações básicas - Encontar embalagem
 * copyright (c) 2022 Wildes Sousa
 */
#include <iostream>

int main()
{
	int num_Produto, num_Caixa = 0;

	std::cin >> num_Produto;

	if (num_Produto != 0 and num_Produto < 7)
		num_Caixa = 1;
	else if (num_Produto < 13)
		num_Caixa = 2;
	else if (num_Produto < 19)
		num_Caixa = 3;
	else if (num_Produto < 25)
		num_Caixa = 4;
	else if (num_Produto < 31)
		num_Caixa = 5;
	else
		if (num_Produto <= 36)
			num_Caixa = 6;

	std::cout << num_Caixa << std::endl;
	return 0;
}
