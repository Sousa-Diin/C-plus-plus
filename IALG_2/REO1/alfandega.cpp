/* Questão 8: Estrutura Condicional - Alfandega 
 * copyright © 2022, by Wildes Sousa 
 * version: 1.0
 */
#include <iostream>
using std::cout;// o programa utiliza cout
using std::cin; // o programa utiliza cin
using std::endl;// o programa utiliza endl

int main()
{
	char opCod; 
	short pdtCod;
       	float pdtPeso;
       	cin >> pdtCod >> pdtPeso >> opCod;

	float pesoGrama = 0, precoBruto = 0, impPdt = 0, precoPdt = 0;//conversão de Kg para g
	//Verifica o Cod.Produto p/ precificar por gram
	if (pdtCod >= 1  and pdtCod <=10)
	{

		pesoGrama = pdtPeso * (float) 1000;
		if (pdtCod <= 10 and pdtCod >7)
			precoPdt = pesoGrama * 35;
		else if (pdtCod >=5 )
			precoPdt = pesoGrama * 25;
		else
			precoPdt = pesoGrama * 10; 
	}
	//Ferifica o codigo do pais e seta a % na VAR
	if ((opCod > 0) or (opCod < 4))
	{
		switch (opCod)
		{

			case '2':
				impPdt = precoPdt * (float)0.15;
				precoBruto = impPdt + precoPdt;		
				break;
			case '3':
				impPdt = precoPdt * (float)0.25;
				precoBruto = impPdt + precoPdt;
				break;
			default:
				precoBruto = impPdt + precoPdt;
		}
	}
	cout.precision(1); cout << std::fixed;
	cout << pesoGrama << "\n"
	     << precoPdt  << "\n"
	     << impPdt    << "\n"
	     << precoBruto << "\n"
     	     << endl;
        return 0 ;
}
