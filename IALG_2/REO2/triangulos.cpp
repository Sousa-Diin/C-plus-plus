/* Questão 5: Estrutura de repetição - Números triangulos 
 * copyright © 2022, by Wildes Sousa 
 * version: 1.22.1
 */
#include <iostream>
using std::cout;// o programa utiliza cout
using std::cin; // o programa utiliza cin
using std::endl;// o programa utiliza endl

int main()
{
	int numTriangulo;
	bool continua = true;

	cin >> numTriangulo;

	int soma = 1;	
	while (continua)
	{

		if (numTriangulo >= 2 ) 
			soma += numTriangulo--;
		else
			continua = false;
	}
	cout << soma << endl;	

        return 0 ;
}

