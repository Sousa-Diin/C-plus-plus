/* Questão 11: Busca Binária (número de comparações)
 * name: Wildes Sousa - 2022
 * date: 23/04/2022 || 12:35
 * version: v1.22
 */
#include <iostream>
using namespace std;

int busca (int v [], int t, int procurado, int &comp);
int main ()
{

    //Cria Vetor
    int TAM, compare = 0;
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
    //cout << compare << endl; // Teste 
    cout << busca (vet, TAM, buscado, compare) << "\n" 
         << compare << endl;
    
    
    return 0;
}
int busca (int v [], int t, int procurado, int &comp)
{
     // VAR - Busca Binaria   
    
    int i, posicao = -1;
    int inicio = 0;
    int fim = t - 1;
    int meio;
    bool stop = true;
    
    i = 0;
    while (i < t and stop){ // vetor ordenado cresente
    
        if (inicio <= fim){ // vetor ordenado cresente
            meio = (inicio + fim) / 2;
            if (v[meio] == procurado){
                posicao = meio;
                comp+=1;
                //i = fim + 1; // para o loop
                stop = false;
            }
            else if (v[meio] > procurado){
                fim = meio - 1;
                comp+=1;
            }              
            else{
                 inicio = meio + 1;
                 comp+=1;
            }              
        }
        i++;
    }
    return posicao;
}
