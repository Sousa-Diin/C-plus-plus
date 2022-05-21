/* Questão 13: Operações básicas - Conversão de Milessegundos para Horario
 * copyright (c) 2022, Wildes Sousa
 * version: 2.0  mod. at 02/02/22
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
        hora = miliS / 3600000;
	miliS %= 3600000;

        min = miliS / 60000;

        seg = (miliS % 60000) /(float)1000;
// SAÌDA
        cout.precision(1); cout << fixed;
        cout << hora << " : " << min << " : " << seg << endl;

        return 0;
}

