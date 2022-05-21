/* Questão 8: Modularização - Soma de Parcelas 
 * copyright © 2022, by Wildes Sousa 
 * version: v1.22.0
 */
#include <iostream>
using std::cout;// o programa utiliza cout
using std::cin; // o programa utiliza cin
using std::endl;// o programa utiliza endl

void somaParcela (int num, double &soma, int i = 1);
int main()
{
        int num_parcela;
        
        cin >> num_parcela;
		double soma = 0.0;
        somaParcela (num_parcela, soma);

        cout << soma << endl;

        return 0 ;
}
void somaParcela (int num, double &soma, int i )
{
        while(i <= num)
		{
			soma = soma + (double)(i * (i + 1)) /(double) (i + 3);
            i++;
		}
}               
