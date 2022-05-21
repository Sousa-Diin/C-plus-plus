/*Questão 4: Matrizes - Correção de provas de múltipla escolha 
* Wildes Sousa
*version: v1.22
*/
#include <iostream>
using namespace std;

int main()
{
	int k = 8;
	char R[k] = {'A','B','C','D','&','2','B','E'};
	int L = 2, C = 8;
	char P[L][C];
	
	for (int i = 0; i < L;i++){
		for (int j = 0; j < C;j++){
			cin >> P[i][j];
		}
	}
	
	cout << "Imprensão:\n";
	float nota = 0;
	int p = 0;
	
	for (int i = 0; i < L;i++){
		for (int j = 0; j < C;j++){
					
			if (P[p] [j] == R[i]){
				nota += 1;
			}
			else
					cout << 0;
				
		}
		cout << endl;
			
	}
	
	
	return 0;
}
