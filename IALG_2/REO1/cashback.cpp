/*Questão 12: Operações básicas - Representar valor com o menor número de notas
 * copyright (c) 2022 Wildes Sousa.
 */
#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
	
    int valor, resul = 0;
	int nota1 = 0, nota2 = 0, nota3 = 0, nota4 = 0,
	nota5 = 0, nota6 = 0, nota7 = 0;
	cin >> valor;
	
	if (valor < 0) valor = abs(valor) ;
	
	if ( valor >= 100 ){
		nota1 = valor / 100;
		resul = valor % 100;
	}else
		resul = valor;
	if (resul / 50 ){
		nota2 = resul / 50;
		resul %= 50;
	}if (resul / 20 ){
		nota3 = resul / 20;
		resul %= 20;
	}if (resul / 10 ){
		nota4 = resul / 10;
		resul %= 10;
	}if (resul /5 ) {
		nota5 = resul /5;
		resul %= 5;
	}if (resul / 2 ){
		nota6 = resul / 2;
		resul %= 2;
	}if (resul / 1 ){
		nota7 = resul / 1;
	}

	cout << nota1 << "\n"
	     << nota2 << "\n"
		 << nota3 << "\n"
		 << nota4 << "\n"
		 << nota5 << "\n"
		 << nota6 << "\n"
		 << nota7 << endl;

	return 0;
}
