/* Questão 4: Estrutura Condicional - Notas ENEM
 * copyright © 2022, by Wildes Sousa 
 * version: 1.0
 */
#include <iostream>

int main()
{
	float tecn_Math, tecn_Cn, tecn_Ling, redacao, tecn_Ch;
	std::cin >> tecn_Math
		 >> tecn_Cn
		 >> tecn_Ling // Entrada da Disciplinas
		 >> redacao
		 >> tecn_Ch;
	//Caso nota redação não seja satisfeita imprimi...(-1), e para o bloco de instrução.
	if ( redacao < 200 )
		std::cout << (-1) << std::endl;

	//Media ponderada das disciplinas
	else
	{
		double media;
		media = (((tecn_Math * 3.0) + (tecn_Cn * 2.0) + ( tecn_Ling * 2.0 )
			+ ( redacao * 2.0 ) +  tecn_Ch ) / 10.0);

		std::cout << media  << std::endl;
	}
	return 0 ;
}

