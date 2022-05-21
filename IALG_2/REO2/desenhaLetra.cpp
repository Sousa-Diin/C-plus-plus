/* Questão 4: Estrutura de repetição - Desenha triângulo de letras 
 * copyright © 2022, by Wildes Sousa 
 * version: 1.22.1
 */
#include <iostream>
using std::cout;// o programa utiliza cout
using std::cin; // o programa utiliza cin
using std::endl;// o programa utiliza endl

int main()
{
        char colunas,linhas, letra;
        int n;

	       cin >> n;
        linhas = 1;
        while (linhas <= n)
        {
			letra = 97;
            colunas = 1;
            while (colunas <= linhas)
            {
                cout << letra << " ";
                colunas++;
				letra++;
            }
				
            cout << endl;
            linhas++; 
        }



        return 0 ;
}
