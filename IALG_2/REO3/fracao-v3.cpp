/* Questão 6: Modularização - Simplificando frações
 * copyright © 2022, by Wildes Sousa 
 * version: v3.22.5
 */

#include <iostream>
using std::cout;// o programa utiliza cout
using std::cin; // o programa utiliza cin
using std::endl;// o programa utiliza endl

int simplificaFracao(int &numerador, int &denominador);
int mdc(int numerador, int denominador, int restoDiv );// INICIALIZAÇÃO NO PROTOTIPO DA FUNÇÃO
int main()
{
        int dividendo;
        int divisor;

        cin >> dividendo
            >> divisor;
	/*  TESTES 
		cout << dividendo << "\n"
             << divisor << endl;
		cout << "\nDepois da função\n";
	*/
         simplificaFracao (dividendo, divisor);
		// IMPRIME A FRAÇÃO IMNRREDUTIVEL
	
        cout << dividendo << "\n"
             << divisor << endl;
		
		
        return 0 ;
}
int simplificaFracao (int &numerador, int &denominador)
{
	if ( denominador % numerador == 0){
			int aux = numerador;
			numerador /= numerador;
			denominador /= aux;
	}
	else if (numerador % denominador == 0){
		numerador /= denominador;
		denominador /= denominador;
	}
	else{
		int restoDiv;
		int divisor = mdc (numerador, denominador, restoDiv  = 0);
		numerador /= divisor;
		denominador /= divisor;
	
	}
	return 0;
}
int mdc(int numerador, int denominador, int restoDiv)
{
		
		int trocaMenor = 0;
        if (numerador < denominador)
        {
                trocaMenor = numerador;
                numerador = denominador;
                denominador = trocaMenor;
        }
        while(numerador % denominador != 0)
        {
                restoDiv = (numerador % denominador);
                numerador = denominador;
                denominador = restoDiv;
        }
        return restoDiv ;
}
