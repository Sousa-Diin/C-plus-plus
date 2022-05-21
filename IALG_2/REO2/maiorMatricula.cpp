//dom 06 fev 2022 09:44:48 
/* Questão 2: Estrutura de repetição - Maiores com valor associado 
 * copyright © 2022, by Wildes Sousa 
 * version: 1.0
 */
#include <iostream>
using std::cout;// o programa utiliza cout
using std::cin; // o programa utiliza cin
using std::endl;// o programa utiliza endl

int main()
{
	int registro = 0, maior = -1, Smaior = 0;
	float nota, notaMaior = -1, SnotaMaior = 0;
	bool continua = true;
	
	int cont = 0;
	do
	{
	
		cont++;
		cout << "Entre com a " << cont << "o matricula: " <<endl;
		cin >> registro;
		if (registro != 0) cin >> nota;
		if (registro == 0 and cont >=2)
			continua = false;
		else
			continua = true;

		if (registro >  maior and nota > notaMaior) 
		{
			Smaior = maior;
			maior = registro;
			
			SnotaMaior = notaMaior;
			notaMaior = nota;
		}
		
		
		
	} while (continua);
	
	if (Smaior > maior)
	{
		int aux = maior;
		maior = Smaior;
		Smaior = aux;
	}
	if (SnotaMaior > notaMaior)
		{
			int auxnota = notaMaior;
			notaMaior = SnotaMaior;
			SnotaMaior = auxnota;
		}
		
	
	cout << "Maior Matricula: " << maior << "\t" <<  notaMaior << endl;
	cout <<"Segunda maior Matricula; " << Smaior <<"\t" << SnotaMaior << endl;
	cout << "contador: " << cont << endl;
}
