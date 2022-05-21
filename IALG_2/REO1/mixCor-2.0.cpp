/* Questão 10: Estrutura Condicional - Mistura de Cores
 * copyright © 2022, by Wildes Sousa ®
 * version: 2.1
 */
#include <iostream>
using std::cout;// o programa utiliza cout
using std::cin; // o programa utiliza cin
using std::endl;// o programa utiliza end

#include <string>
using std::string;// o programa utiliza string

int main()
{
	string cor1 , cor2;
	cin >> cor1 >> cor2;
	
/*
	if (cor1.compare(cor2) == 0) // Compara o valor da string objeto | REF: cplus cplus
		cout << cor1 << endl;
*/
	//forma as cores secundarias
	if (cor1 == cor2)
		cout << cor1 <<"\n";
	else if ((cor1 == "azul" && cor2 == "vermelho" )or (cor1 == "vermelho" && cor2 == "azul"))
		cout << "violeta" << endl;
	else if ((cor1 == "azul" && cor2 == "amarelo" )or (cor1 == "amarelo" && cor2 == "azul"))
		cout << "verde" << endl;
	else
		cout << "laranja" << endl;
	return 0;
}
