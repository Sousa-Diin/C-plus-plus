/*Questão 7: Vetores - String - Contando vogais e consoantes.
 *copyright (c) 2022 - Wildes Sousa
 *version: v1.22
 */
#include <iostream>
#include <cstring>
using namespace std;

int main() {
	
	char vogais[5] = {'a','e','i','o','u'};
    char palavras[20];
    int  soma_vogal = 0;
	cin >> palavras;

	int tam = strlen(palavras);
    
    for(int palavra = 0; palavra < tam; palavra++)
    {
        for(int vogal = 0; vogal < 5; vogal++)
        {
            if(palavras[palavra] == vogais[vogal])
            {
                soma_vogal++;
            }
        }
    }

	cout << soma_vogal << "\n"
		 << (tam - soma_vogal ) << endl;
  
    return 0;
}
