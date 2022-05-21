/* Questão 7: Operações básicos - troco
 * copyright (c) 2022, Wildes Sousa
 */
#include <iostream>
using namespace std;

int main()
{

	int pag_Client, tot_Compra, troco = 0;
	int nota_1 = 0, nota_2 = 0, nota_3 = 0, nota_4 = 0, nota_5 = 0;

	cin >> pag_Client >> tot_Compra;
	troco = pag_Client - tot_Compra;

	if (troco / 20 )
	{
		nota_1 = troco / 20;
		troco = troco % 20;
	}
	if (troco / 10)
	{
		nota_2 = troco /10;
		troco %= 10;
	}
	if (troco / 5 )
	{
		nota_3 = troco / 5;
		troco %= 5;
	}
	if (troco / 2 )
	{
		nota_4 = troco / 2;
		troco %= 2;
	}
	if (troco / 1 )
	{
		nota_5 = troco / 1 ;  
	}

	cout << nota_1 << "\n"
		 << nota_2 << "\n"
		 << nota_3 << "\n"
		 << nota_4 << "\n"
		 << nota_5 << endl;

	return 0;
}
