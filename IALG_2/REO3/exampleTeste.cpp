/* Exercicos em Aula
 * copyright (c) 2022 - Wildes Sousa
 * version: v1.22.0
 */
 #include <iostream>
 using namespace std;
 double fat (double n);
 void combinacoes(int n, int p, int &comb);
 int main ()
 {
 	int n;
 	int p;
 	int comb = 0;
 	
 	cin >> n
 	    >> p;
 	
 	combinacoes (n , p, comb);
 	cout << comb << endl;
 	return 0;
 }	
 double fat (double n)
 {
 	if (n == 1)
 		return 1;
 	return (n * fat (n -1));
 	
 }
 void combinacoes(int n, int p, int &comb)
 {
 	comb = (fat (n) / (fat (p) * fat(n - p)));
 }
