/*Questão 11: Operações básicas - Equação reduzida da reta
 *
 * copyright (c) 2022, Wildes Sousa
 */
#include <iostream>

int main(void)
{
 	  
	float x1, y1 , x2, y2;
	double m, q;

	std::cin >> x1 >> y1
		     >> x2 >> y2;

	m = ((y2 - y1) / ( x2 - x1));
	q = ( y1 - ((float)m * x1));

	std::cout << m << std::endl;
	std::cout << q << std::endl;
	return 0;
}   
