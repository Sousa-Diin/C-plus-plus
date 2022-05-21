/* Questão 7: Estrutura Condicional - Rendimentos Bancários
 * copyright © 2022, by Wildes Sousa 
 * version: 1.0
 */
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float capital;
	char op;

	cin >> op
	    >> capital;

	switch (op)
	{
		case '1':
			cout.precision(2);
			cout << fixed
			     << (capital * 1.005 ) << endl;
			 break;
		case '2':
			 cout << ceil(((capital -30.0) * 1.03)) << endl;
			 break;
	}
			 
	return 0 ;
}

