/* Questão 3: Estrutura de repetição - Palavra Certa
 * copyright © 2022, by Wildes Sousa 
 * version: 1.2 mod: at 17:34 day 01/02/22
 */
#include <iostream>
using std::cout;// o programa utiliza cout
using std::cin; // o programa utiliza cin
using std::endl;// o programa utiliza endl
using std::string;

int main()
{

	char palavra;
	short a = 0, b = 0;

	int i = 0;
	while(i < 10)
	{
		cin >> palavra;
		if ( palavra == 'a')
			a++;
		if (palavra == 'b')
			b++;
		i++;
	}

	if (a < b)
		palavra = '1';
	else
		palavra = '0';

//	cout << (a < b) ? "1" : "0"; Possível ERRO da versão 1.0
	cout << palavra << endl;
        return 0 ;
}

