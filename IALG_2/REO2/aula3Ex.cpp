/* Exercicio 3: Estrutura de repetição  
 * copyright © 2022, by Wildes Sousa 
 * version: 1.0
 */
#include <iostream>
using std::cout;// o programa utiliza cout
using std::cin; // o programa utiliza cin
using std::endl;// o programa utiliza endl

int main()
{
	float quantidade;
	int tempo = 0;

	cin >> quantidade;
	while ( quantidade >= 0.10 )
	{
		quantidade -= 25.0/100 * quantidade;
		tempo += 30;
	}

	int horas = tempo / 3600;
	tempo = tempo % 3600;

	int minutos = tempo / 60;
	tempo = tempo % 60;

	cout << horas << " : " << minutos << " : " << tempo << endl;
        return 0 ;
}
