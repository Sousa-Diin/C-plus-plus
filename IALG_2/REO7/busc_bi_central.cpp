/* Questão 9: Busca binária - Imprimindo o elemento central RECURSIVO
 * name: Wildes Sousa - 2022
 * date: 25/04/2022 || 08:35
 * version: v1.22.1
 */
#include <iostream>
using namespace std;

void busca (int v [], int inicio,int fim, int procurado);
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
    
    busca (vet, 0, TAM - 1, buscado);
    cout << endl;    
        
    return 0;
}
void busca (int v [], int inicio,int fim, int procurado)
{
    
    int meio = (inicio + fim) / 2;
   
   if (inicio <= fim){
        if (v[meio] == procurado){              
           cout << v[meio] << " ";      
        }
        else if (v[meio] > procurado){
            cout << v[meio] << " ";
            busca(v, inicio, meio -1,procurado);           
        }
        else{
            cout << v[meio] << " ";
            busca(v,meio + 1, fim, procurado);              
        }   
   }        
}

/*
void busca (int v [], int t, int procurado)
{
     // VAR - Busca Binaria   
    
    int i;
    int inicio = 0;
    int fim = t - 1;
    int meio;
    bool stop = true;
    
    i = 0;
    while (i < t and stop){ // vetor ordenado cresente
    
        if (inicio <= fim){ // vetor ordenado cresente
            meio = (inicio + fim) / 2;
            if (v[meio] == procurado){
                cout << v[meio] << " ";
                stop = false;
            }
            else if (v[meio] > procurado){
                fim = meio - 1;
                cout << v[meio] << " ";
            }              
            else{
                 inicio = meio + 1;  
                 cout << v[meio] << " ";            
            }              
        }
        i++;
    }
}*/

