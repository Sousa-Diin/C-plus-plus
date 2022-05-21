/* Questão 10: Estrutura Condicional - Mistura de Cores
 * copyright © 2022, by Wildes Sousa ®
 * version: 2.1
 */
#include <iostream>
using std::cout;// o programa utiliza cout
using std::cin; // o programa utiliza cin
using std::endl;// o programa utiliza endl

#include <string>
using std::string;// o programa utiliza string

int main()
{
	string cor1 , cor2;
	cin >> cor1 >> cor2;
	if ((cor1 == "azul" or cor1 = "amarelo" or cor1 == "vermelho") and 
	   (cor2 == "azul" or cor2 = "amarelo" or cor2 == "vermelho"))
	{
		//forma as cores secundarias
		/*if (cor1.compare(cor2) == 0) // Compara o valor da string objeto | REF: cplus cplus
			cout << cor1 << endl;
		*/
		
		if ((cor1 == "azul" && cor2 == "vermelho" )or (cor1 == "vermelho" && cor2 == "azul"))
			cout << "violeta" << endl;
		else if ((cor1 == "azul" && cor2 == "amarelo" )or (cor1 == "amarelo" && cor2 == "azul"))
			cout << "verde" << endl;
		else if ((cor1 == "vermelho" && cor2 == "amarelo" )or (cor1 == "amarelo" && cor2 == "vermelho"))
			cout << "laranja" << endl;
		else
			cout << cor1 << endl;
	}
		
	return 0;
}
