/* Questão 4: Modularização - Determinação de Média
 * copyright © 2022, by Wildes Sousa 
 * version: v1.0-22
 */
#include <iostream>
using std::cout;// o programa utiliza cout
using std::cin; // o programa utiliza cin
using std::endl;// o programa utiliza endl

float media(float n1,float n2);
int main()
{
	float num1, num2;
	cin >> num1
	    >> num2;
	cout << media (num1, num2) << endl;

        return 0 ;
}
float media (float n1, float n2)
{
	float media = (n1 + n2) / 2.0;
	return media;
}
