/* Script para testes de conceitos e trechos de codigos 
 * copyright (c) 2022, Wildes Sousa
 */
#include <iostream>
#include <cmath>
using namespace std;
int main()
{ 
	/*
	bool verifica  = 'a', verifica1 = 0, verifica2 = 0.5;
	if (1)
		std::cout << "é verdadeiro \n";

	 std::cout << verifica
			   << verifica1
			   << verifica2 
		 	   << std::endl;
	*/
	float numero = 25;
	cout.precision(10);
	cout.setf(ios::fixed);
	cout << "A raiz de " << numero << " é o valor "
		 << sqrt(numero) << endl;
	return 0;
}
