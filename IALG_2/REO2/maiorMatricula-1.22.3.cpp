//dom 07 fev 2022 10:44:48 
/* Questão 2: Estrutura de repetição - Maiores com valor associado 
 * copyright © 2022, by Wildes Sousa 
 * version: 1.22.4
 * modificacao: 12/02/2022 11:31:30
 */
#include <iostream>
using std::cout;// o programa utiliza cout
using std::cin; // o programa utiliza cin
using std::endl;// o programa utiliza endl

int main()
{
	int registro = 0, maior, Smaior;
	float nota, notaMaior = -1, segNotaMaior = 0;
	bool continua = true;
	
		
	int cont = 0;
	do
	{
	
		cont++;
		cin >> registro;

		maior = registro;
		Smaior = registro;

		if (registro != 0) cin >> nota;
		if (registro == 0 and cont >=2)
			continua = false;
		else
			continua = true;

		if ( nota > notaMaior) 
		{
			segNotaMaior = notaMaior;
			maior = registro;
			
			notaMaior = nota;		
		}
		if (segNotaMaior > maior)
		{
			int aux = maior;
			maior = Smaior;
			Smaior = aux;
		}
		if (segNotaMaior > notaMaior)
		{
			int auxnota = notaMaior;
			notaMaior = segNotaMaior;
			segNotaMaior = auxnota;
		}
		
	 while (continua);
	
	
		
	
	cout << maior << "\t" <<  notaMaior << endl;
	cout << Smaior <<"\t" << segNotaMaior << endl;
	//cout << "contador: " << cont << endl;
}
