/* Questão 1: Estrutura Condicional - 
 * copyright © 2022, by Wildes Sousa 
 * version: 1.0
 */
#include <iostream>
using std::cout;// o programa utiliza cout
using std::cin; // o programa utiliza cin
using std::endl;// o programa utiliza endl
using std::string; // o programa utiliza string

#include <cstring>
using std::string;// o programa utiliza string

int main()
{
	string cor1, cor2, result = "NULL";
	cin >> cor1 >> cor2;

	//faz a conparacao da cores
	result = strcmp (cor1,cor2);
	if (result == 0)
		cout << cor1 << "\n";

        return 0 ;
}
