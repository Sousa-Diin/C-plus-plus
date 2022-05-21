/* Questão 10: Modularização - Tribonacci - versao 2
 * copyright © 2022, by Wildes Sousa 
 * version: v1.0-22
 */
#include <iostream>
using std::cout;// o programa utiliza cout
using std::cin; // o programa utiliza cin
using std::endl;// o programa utiliza endl

void tribonacci (int n)
{
	if (n <= 3)
		if (n <= 2)
			n = 1;
		else
			n = 2;
	else
		cout << (tribonacci ((n-1) + (n-2) + (n-3))) <<endl;
}
int main()
{
	int n; 
	cin >> n;

	tribonacci(n);

	return 0;
}
