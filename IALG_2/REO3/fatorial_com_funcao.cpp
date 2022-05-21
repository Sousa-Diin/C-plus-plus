/* Questão 5: Modularização - Cálculo de Fatorial
 * copyright © 2022, by Wildes Sousa 
 * version: v1.0-22
 */
#include <iostream>
using std::cout;// o programa utiliza cout
using std::cin; // o programa utiliza cin
using std::endl;// o programa utiliza endl

int fatorial ( int num);
int main ()
{
	int n;
	cin >> n;
	cout << fatorial (n) << endl;
	return 0;
}
int fatorial (int num)
{
	if (num == 0 )
		return 1;
	return num * fatorial(num -1);
}
