/* Exercicos em Aula - Verifica se o maior e divisivel pelo menor
 * copyright (c) 2022 - Wildes Sousa
 * version: v1.22.0
 */
 #include <iostream>
 using namespace std;

 void trocamenor ( int &maior, int &menor);
 int verifica (int num1, int num2);
 int main ()
 {
 	int n1, n2;
 	
 	cin >> n1 >> n2;
 	
 	cout << verifica (n1, n2);
 	cout << endl;
 	//trocamenor ( n1, n2);
 	//cout << n1 << " " << n2 << endl;
 	
	 return 0;
 }
 void trocamenor ( int &maior, int &menor)
 {
 	if (maior < menor){
 		int aux = maior;
 		maior = menor;
 		menor = aux;
 	}
 	
 }
 int verifica(int num1, int num2)
 {
 	trocamenor (num1, num2);
 	while (num1 >= num2){
 		num1 -= num2;
 		
 	}
 	return num1;
 }
