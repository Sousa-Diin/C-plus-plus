// Referncial - PROGRAMIZ 
// modelo intercalação
//https://www.programiz.com/dsa/merge-sort
#include <iostream>
#include <cstring>

using namespace std;
struct Carro 
{
	string modelo;
	string marca;
	int ano;
};

void mergeAll(string *arr, int p, int q, int r);
void merge (string *S, int inicio, int fim);

int main()
{
    int TAM ;
	cout << "Entre com a capacidade do Registro: ";
	cin >> TAM;
    string *S = new string[TAM];
    
              
    for(int i = 0; i < TAM; i++){
		cout << "Entre com " << i+1 << " numero ";
        cin >> S[i];
      
    }
    
    merge (S,0,TAM-1);
    cout << "Compila....\n SAIDA:\n";
    
    for(int i = 0; i < TAM; i++){
        cout << S[i] << " ";
      
    }
	delete [] S;
	S = NULL;
	
	return 0;
	
}
void merge (string *S, int inicio, int fim)
{
    int meio;
    if (inicio < fim){
     
        meio = (inicio + fim) / 2;
        merge (S, inicio, meio);
        merge (S, meio +1, fim);
        mergeAll (S,inicio,meio,fim);
        
    }   
}

void mergeAll(string *arr, int inicio, int meio, int fim) {
  
  
   int t_S1 = meio - inicio + 1; //inicio + meio; //vet S1
   int t_S2 = fim - meio;        //(meio+1) + fim; //vet S2
   
  
  string *S1 = new string[t_S1];
  string *S2 = new string[t_S2];

  for (int i = 0; i < t_S1; i++)
    S1[i] = arr[inicio + i];
  for (int j = 0; j < t_S2; j++)
    S2[j] = arr[meio + 1 + j];

  int i, j, k;
  i = 0;
  j = 0;
  k = inicio;

  while (i < t_S1 and j < t_S2) {
    if (S1[i] <= S2[j]) {
      arr[k] = S1[i];
      i++;
    } else {
      arr[k] = S2[j];
      j++;
    }
    k++;
  }
  while (i < t_S1) {
    arr[k] = S1[i];
    i++;
    k++;
  }

  while (j < t_S2) {
    arr[k] = S2[j];
    j++;
    k++;
  }
  delete [] S1;
  delete [] S2;
  S1 = NULL;
  S2 = NULL;
  
}
