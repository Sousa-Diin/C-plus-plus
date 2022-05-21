/* Questão 6: Modularização - Simplificando frações
 * copyright © 2022, by Wildes Sousa 
 * version: v1.22.1
 */

#include <iostream>
using std::cout;// o programa utiliza cout
using std::cin; // o programa utiliza cin
using std::endl;// o programa utiliza endl


void simplificaFracao (int numerador, int denominador, int cont);
int main()
{
        int dividendo;
        int divisor;
        int i = 2; // usado pra enviar uma mensagem de ERRO!

        cin >> dividendo
            >> divisor;
        
        if (not (dividendo % 2 == 0 and divisor % 2 == 0))
        	i = 3;

        simplificaFracao (dividendo, divisor, i);

        return 0 ;
}
void simplificaFracao (int numerador, int denominador, int cont)
{
		bool divisivel = true;

        while (divisivel  or  (numerador % cont == 0 and denominador % cont == 0))
		{
			if ( denominador % numerador == 0){
				int aux = numerador;
				numerador /= numerador;
				denominador /= aux;
				divisivel = false;
			}
			else{
				numerador /= cont;
				denominador /= cont;
			}
			cont++;
		}
		cout << numerador << "\n"
			 << denominador << endl;
}
