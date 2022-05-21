/* Questão 6: Modularização - Simplificando frações
 * copyright © 2022, by Wildes Sousa 
 * version: v1.22.0
 */

#include <iostream>
using std::cout;// o programa utiliza cout
using std::cin; // o programa utiliza cin
using std::endl;// o programa utiliza endl


void simplificaFracao (int &numerador, int &denominador, int cont);
int main()
{
	int dividendo;
	int divisor;
	int i = -1;

	cin >> dividendo
	    >> divisor;
	if (divisor != 0 ){ 
		if (dividendo % 2 == 0 and divisor % 2 == 0)
			i = 2;
		else
			i += 3;
	}

	cout << dividendo / i << "\n" << divisor / i << endl;
	cout << "Resultado da Fução " << endl;
	simplificaFracao (dividendo, divisor, i);

        return 0 ;
}

void simplificaFracao (int &numerador, int &denominador, int cont)
{
	
	while ((denominador % cont == 0) and ( numerador % cont == 0 )){
		numerador /= cont;
		denominador /= cont;	
	}
	cout << numerador <<"\n"
	     << denominador << endl;

}

	
