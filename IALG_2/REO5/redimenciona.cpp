/* Exemplo de alocação dinamica e redimencionamento
 * date: 08/04/2022
 */
 
 #include <iostream>
 #include <string.h>
 
 using namespace std;
 
 int *redimensiona (int *v[], int &capacity);
 int main ()
 {	
 	int TAM = 5;
 	int *vetor = new int[TAM];
 	int entrada, preenchido, realocacao;
 	
 	//cout << "Endereço do vetor original: " << vetor << endl;
 	preenchido = 1;
 	realocacao = 0;
 	
 	cin >> entrada;
 	
 	while (entrada > 0){
 		preenchido++;
 		if ((preenchido > 0) and (preenchido % 5 == 0)){
 			vetor = (int*)redimensiona (vetor, TAM);
 			realocacao++;
 		}
 		vetor[preenchido] = entrada;
 		//cout << "Endereço inicial da posição " << preenchido << ": " << &vetor[preenchido] << endl;
 		cin >> entrada;
 	}
 	
 	for (int i = 0; i <= preenchido; i++){
 		cout << vetor[i] << " ";
 	}
 		
 	//cout << endl << TAM << endl << realocacao << endl;
 	delete [] vetor;
 
 	return 0;
 }
 
 int *redimensiona (int *v[], int &capacity)
 {
 	//cout << "Endereço do vetor na função: " << v << endl;
 	int *novo = new int [capacity+5];
 	
 	memcpy(novo, v, (sizeof(int)*capacity));
 	capacity = capacity + 5;
 	//cout << "Endereço do novo vetor: " << novo << endl;
 	
 	delete [] v;
 	return novo;
 }
 
