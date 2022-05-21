/* Questão: 16 Modularização - Sequencia Fibonacci
 * copyright © 2022, by Wildes Sousa
 * date: 05/03/2022 || 18:17
 * version: v1.22.0
 */
#include <iostream>
using namespace std;

void fibonacci (int fibN, int &fib);
int main()
{
	int fibN, fib;
	cin >> fibN;

	fibonacci(fibN, fib);

	return 0;
}
void fibonacci (int fibN, int &fib)
{
	int fib1 = 0, fib2 = 1;

	
	int cont = 2;

	if( fibN == 1) cout << fib1 <<endl;
	else if (fibN >= 2){
		cout << fib1 << endl;
		cout << fib1 + fib2 << endl;
		while (not(fibN == cont) )
			{
				
				fib = (fib1 + fib2);

				cout << fib << endl;
				fib1 = fib2;
				fib2 = fib;
				cont++;
			}
	}
}

