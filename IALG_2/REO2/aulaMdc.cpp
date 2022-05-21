/*Questão do Slide MDC
 * Date: 31/01/22
 * version: 1.0
 */
#include <iostream>
using namespace std;

int main()
{
	int num1, num2, restoDiv = 0, trocaMenor = 0;
	cin >> num1 >> num2;
	if (num1 < num2)
	{
		trocaMenor = num1;
		num1 = num2;
		num2 = trocaMenor;
	}
	while(num1 % num2 != 0)
	{	
		restoDiv = (num1 % num2);
		num1 = num2;
		num2 = restoDiv;
	}
	cout << restoDiv << endl;
	return 0;
}
