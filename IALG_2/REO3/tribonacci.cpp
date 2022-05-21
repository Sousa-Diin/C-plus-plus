/* Questão: 10 Recursão - Sequência de Tribonacci - versão 2
 * copyright © 2022, by Wildes Sousa
 * date: 05/03/2022 || 18:17
 * version: v1.22-0
 */
#include <iostream>
using namespace std;

int tribonacci (int n);
int main()
{
    int num, i = 1;
    cin >> num;
	while(num >= i){
		cout << tribonacci(i) << " ";
		i++;
	}
	cout << endl;
        
	return 0;
}
int tribonacci (int n)
{
	
	if (n == 1)
		return 1;
	if (n == 2)
		return 1;
	if (n == 3)
		return 2;
	return tribonacci(n - 1) + tribonacci(n - 2) + tribonacci(n - 3);
}         