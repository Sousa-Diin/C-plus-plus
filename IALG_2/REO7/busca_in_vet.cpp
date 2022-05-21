/* Questão 14: Modularização – Busca dentro de um vetor
 * name: Wildes Sousa - 2022
 * date: 23/04/2022 || 12:35
 * version: v1.22
 */
#include <iostream>
using namespace std;

int busca (int v [], int t, int procurado);
int main ()
{

    //Cria Vetor
    int TAM;
    cin >> TAM;
    int vet [TAM];
    
    //Entrada de dados   
    for (int i = 0; i < TAM; i++)
        cin >> vet[i];
    
    // VAR - Busca Binaria   
    int buscado;
    
    //Entrada da busca
    cin >> buscado;
    
    //Returno da funcao busca
    cout << busca (vet, TAM, buscado) << endl;
    
    
    return 0;
}
int busca (int v [], int t, int procurado)
{
     // VAR - Busca Binaria   
    
    int i, posicao = -1;
    int inicio = 0;
    int fim = t - 1;
    int meio;
    
    i = 0;
    while (t > i){ // vetor ordenado cresente
    
        if (fim >= inicio){ // vetor ordenado cresente
            meio = (inicio + fim) / 2;
            if (v[meio] == procurado){
                posicao = meio;
                i = fim + 1; // para o loop
               // cout << meio << endl; // teste quant.Comparacoes
            }
            if (v[meio] < procurado){
                fim = meio - 1;
               // cout << meio << endl; // teste
            }              
            else{
                 inicio = meio + 1;
               // cout << meio << endl; // teste
            }              
        }
        i++;
    }
    return posicao;
}
