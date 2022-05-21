#include <iostream>
using namespace std;
int main() {
  int num;
  cin >> num; 
  float vetor[num];
  float soma = 0;
  int i;
  for (i = 0; i < num; i++) { 
     cin >> vetor[i]; //leitura dos dados 
     soma += vetor[i]; //somatório dos elementos
  }
  for (i = 0; i < num; i++) 
     cout << vetor[i] << " "; //impressão dos dados 
  cout << endl;
  cout << "Média = " << soma/num << endl;
  return 0;
}

