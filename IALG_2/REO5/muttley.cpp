/* PROVA 
 *Questão 2: Vetores e Strings - Dick Vigarista e Muttley - Fazendo hash de um vetor de palavras (2)
 * version: v1.22
 * copyright (c) - Wildes Sousa
 */
 #include <iostream>
 using namespace std;
 
 int main()
 {
 	unsigned int tam;
 	cin >> tam;
 	
 	string palavra[tam];
 	for (unsigned i = 0; i < tam; i++){
 		cin >> palavra[i];
 	}
 	
 	const int UMPRIMO = 37;
	const int M = 15;
	long hash = 0;

	for (unsigned j = 0; j < palavra.size(); j++) {
        hash = (UMPRIMO * hash + palavra[j]) % M;   
	}
	
 	cout << "As "<< tam << " palavras foram inseridas com sucesso.\n";
 	cout << hash << endl;
 	return 0;
 }
