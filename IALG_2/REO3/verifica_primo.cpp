/* Exercicos em Aula - Utilizando crivo de erastostenes
 * copyright (c) 2022 - Wildes Sousa
 * version: v1.22.0
 */
 #include <iostream>
 using namespace std;
 
 void ehPrimo (int eh_primo);
 void exibePrimo (int n, int indice);
 int main ()
 {
 	int valores, i = 1;
 	cin >> valores;
	cout << endl;
 	exibePrimo(valores, i);
 	return 0;
 }
 void ehPrimo (int eh_primo)
 {
 	if ( (eh_primo != 1 )and (eh_primo == 2 or eh_primo == 3 or 
		eh_primo == 5 or eh_primo == 7))
		cout << eh_primo << " é primo!\n";
	else if ((eh_primo != 1 ) and (eh_primo % 2 != 0 and eh_primo % 3 != 0 
			and eh_primo % 5 != 0 and eh_primo % 7 != 0))
		cout << eh_primo << " é primo!\n";
	else
		cout << eh_primo << " não é primo!\n";
	
	cout << endl;
 }
 void exibePrimo (int n, int indice)
 {
 	int eh_primo;
 	if (indice <= n){
 		cin >> eh_primo;
 		exibePrimo (n, indice + 1);
 		ehPrimo(eh_primo);
 	}
 
 }
