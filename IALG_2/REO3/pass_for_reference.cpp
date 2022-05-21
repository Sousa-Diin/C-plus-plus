/* Questão 7: Modularização - Passagem por referencia
 * copyright © 2022, by Wildes Sousa 
 * version: v1.0-22
 */
#include <iostream>
using std::cout;// o programa utiliza cout
using std::cin; // o programa utiliza cin
using std::endl;// o programa utiliza endl

int soma(int num1, int num2, int &resul );
int main ()
{
        int n1, n2;
	int resultado = 0;
        cin >> n1 >> n2;
        cout << soma (n1, n2, resultado) << endl;
        return 0;
}
int soma(int num1, int num2, int &resul )
{
	resul = num1 + num2;
        return resul;
}

