/*Questão 6: Operações básicas - Contrução de caravelas
 * copyright (C) 2022, Wildes Sousa
 */
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
 //VAR
    int quantMan;
	float buildShip = 0;
 //ENTRADA
    cin >> quantMan;
 //PROCESSAMENTO
    if (quantMan > 1000)
	{
		buildShip = ((float)(quantMan - 1000) / 80);
	}else if (quantMan > 200 )
	{
		buildShip = ((float)(quantMan % 200) / 80);
	}else
	{
		buildShip += buildShip;
	}

	cout << ceil(buildShip) << endl;


    return 0;
}
