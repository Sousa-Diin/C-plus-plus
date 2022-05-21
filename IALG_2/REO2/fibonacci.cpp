/* Questão 6: Estrutura de repetição - Sequencia Fibonacci 
 * copyright © 2022, by Wildes Sousa 
 * version: 1.22.4
 * date:12-02-22 ||14:20:57
 */
#include <iostream>
using std::cout;// o programa utiliza cout
using std::cin; // o programa utiliza cin
using std::endl;// o programa utiliza endl

int main()
{
	int stTermo = 0;
	int ndTermo = 1;
	int nTermo, termo;
	cin >> nTermo;

	
	
	if (nTermo > 0 )
		cout << 1 <<endl;
	
	int cont = 0;
	while ( nTermo != cont )
	{
		cout << stTermo <<endl;
		termo = stTermo + ndTermo;
		cout << termo <<endl;
		
		stTermo = ndTermo;
		ndTermo = termo;
		//--nTermo;
		cont++;
	}
		
	cout << "Cont: \t" << cont;
        return 0 ;
}

