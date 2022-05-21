/* Questão 81: Modularização - Soma Sucessivas 
 * copyright © 2022, by Wildes Sousa 
 * version: v1.22.0
 * COPY EXEMPLO DA IALG PDF
 */
#include <iostream>
using std::cout;// o programa utiliza cout
using std::cin; // o programa utiliza cin
using std::endl;// o programa utiliza endl


int funcaoSs(int valor1, int valor2);
int main()
{
	int num1, num2;
	cin >> num1
		>> num2;

	cout << funcaoSs(num1, num2) << endl;

        return 0 ;
}

int funcaoSs(int valor1, int valor2) 
{
	if (valor2 == 0)
		return 0;
	if (valor2 % 2 == 0)
		return funcaoSs(valor1+valor1, valor2/2);
	return funcaoSs(valor1+valor1, valor2/2) + valor1;
}
