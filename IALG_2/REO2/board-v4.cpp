/* Questão 11: Estrutura de repetição - Tabuleiro 
 * copyright (c) 2022, by Wildes Sousa 
 * version: v4.22.0
 */
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
	int size;
	int line;
	int column;

	cin >> size;
	line = 1;
	while (line <= size)
	{
		if (line % 2 != 0){
			column = 1;
			while (column <= size)
			{
				if (column % 2 != 0)
					cout << ".";
				else
					cout << "#";
				
				column++;
			}
			cout << endl;
		}
		else {
			column = 1;
			while (column <= size)
			{
				if (column % 2 != 0)
					cout << "#";
				else
					cout << ".";
				
				column++;
			}
			cout << endl;
		}
		line++;
	}
	
}
