/* REVISÃO DA PROVA P3
 * name: Wildes Sousa - 2022
 * date: 23/04/2022
 * version: v1.22
 */
#include <iostream>
using namespace std;

int main ()
{
    const int TAM = 10;
    int vet [TAM];
    
    //Entrada de dados
    for (int i = 0; i < TAM; i++)
        cin >> vet[i];
    
    // VAR - Busca Binaria
    
    int busca;
    int i, posicao = -1;
    int inicio = 0;
    int fim = TAM - 1;
    int meio;
    
    cin >> busca;
    
    i = 0;
    while (TAM > i){ // vetor ordenado decresente
    
        if (fim >= inicio){ // vetor ordenado decresente
            meio = (inicio + fim) / 2;
            if (vet[meio] == busca){
                posicao = meio;
                i = fim + 1; // para o loop
                cout << meio << endl; // teste
            }
            if (vet[meio] < busca){
                fim = meio - 1;
                cout << meio << endl; // teste
            }              
            else{
                 inicio = meio + 1;
                cout << meio << endl; // teste
            }              
        }
        i++;
    }
    cout << "\n\nPosição encontrada: ";
    cout << posicao << endl;
    
    return 0;
}
