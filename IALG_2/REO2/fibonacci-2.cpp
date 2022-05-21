/* Questão: 6 Estrutura de repeticao - Sequencia Fibonacci
 * copyright © 2022, by Wildes Sousa
 * date: 13/02/2022 || 10:26
 * version: 2.22.1
 */
#include <iostream>
using namespace std;

int main()
{
	int fib1 = 0, fib2 = 1, fibN, fib;

	cin >> fibN;
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
