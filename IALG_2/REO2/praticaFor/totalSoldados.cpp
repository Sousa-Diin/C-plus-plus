/* Exempo em sala de aula Profesor Juliana
 * date: 09/02/2022
 * copyright (C) 2022, by Wildes Sousa (R)
 */
#include <iostream>
using namespace std;

int main()
{
	int totalSoldados, soldadosFila, quantFilas;

	cin >> totalSoldados;

	soldadosFila = 0;
	quantFilas = 0;

	while (totalSoldados > 0)
	{
		soldadosFila ++;
		quantFilas += 1;
		totalSoldados = totalSoldados - 1;
	}
	cout << quantFilas;
	return 0;
}
