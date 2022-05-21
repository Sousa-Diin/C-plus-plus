/* Questão 13: Operações básicas - Conversão de Milessegundos para Horario
 * copyright (c) 2022, Wildes Sousa
 */
#include <iostream>
using namespace std;

int main()
{
//ENTRADA
	int miliS;
	cin >> miliS;
//VAR
	int hora = 0, min = 0;
	float seg = 0;
//PROCESSAMENTO
	seg = (float) ((miliS / 1000) % 60 );
	min = ((miliS / (1000 * 60 )) % 60 );
	hora =((miliS / (1000* 60 * 60)) % 24);
// SAÌDA
	cout.precision(1); cout << fixed;
	cout << hora << " : " << min << " : " << seg << endl;

	return 0;
}
