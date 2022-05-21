/* Questão 10: Busca Binária - Substituição
 * name: Wildes Sousa - 2022
 * date: 25/04/2022 || 7:53
 * version: v1.22
 */
#include <iostream>
using namespace std;

int busca (int v [], int t, int procurado, int &comp);
void imprimi(int v[], int t);
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
    int buscado, alteracao, troca = 0;
    
    //Entrada da busca e alteração
    cin >> buscado
        >> alteracao;
    
    troca = busca (vet, TAM, buscado, compare);
    if (troca != -1)
        vet[troca] = alteracao; 
    imprimi (vet, TAM);
    cout << endl;
    cout << compare << endl;
    //cout << troca << endl;
    
    
    return 0;
}
int busca (int v [], int t, int procurado, int &comp)
{
     // VAR - Busca Binaria   
    
    int i, posicao = -1;
    int inicio = 0;
    int fim = t;
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
void imprimi(int v[], int t)
{
    if(t == 1){
        cout << v[t - 1] << " ";
    }
    else{
        imprimi (v, t - 1);
        cout << v[t - 1] << " ";
    }
}

