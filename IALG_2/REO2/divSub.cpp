/* Questão 1: Estrutura de repetição - Divisão sem operador (/) e (%). 
 * copyright © 2022, by Wildes Sousa 
 * version: 1.1
 */
#include <iostream>
using std::cout;// o programa utiliza cout
using std::cin; // o programa utiliza cin
using std::endl;// o programa utiliza endl

#include <cmath>

int main()
{
	int dividendo, divisor, cont;
	bool verifica = true;
	cin >> dividendo >> divisor;
	dividendo = abs(dividendo); divisor = abs(divisor);		
	// Verifica se dividendo é menor caso seja troca
	if (dividendo < divisor)
	{
		int aux = dividendo;// Variavel local
		dividendo = divisor;
		divisor = aux;
	}
	cont = 0;// conta a quant. de Divisão
	while(verifica)
	{
		if (dividendo == 1 or dividendo == 0 or dividendo - divisor < 0 )
		{
			verifica = false;// Criterio de parada
			cont--;
		}
		dividendo -= divisor;
		cont++;
	}
	cout << cont << endl;
        return 0 ;
}
