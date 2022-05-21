/*Exemplo da sala de sula
 * copyright (c) 2022- Wildes Sousa
 * version:v1.22.0
 */

#include <iostream>
using namespace std;
int fat (int termo)
{
	if (termo == 1)
		return 1;
	return (termo * fat (termo -1));
}
int arranjo (int n, int p)
{
	return (fat(n) / fat (n-p));
}
int main ()
{
	int termo;
	int particao;

	cin >> termo;
	
	cout << arranjo (termo, particao);
	cout << endl;

	return 0;
}
