/* Questão 14: Modularização – Busca dentro de um vetor
 * name: Wildes Sousa - 2022
 * date: 23/04/2022 || 12:35
 * version: v1.22
 */
#include <iostream>
using namespace std;

int busca (int v [], int inicio, int fim, int procurado);
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
    cout << busca (vet, 0, TAM-1, buscado) << endl;
    
    
    return 0;
}
int busca (int v [], int inicio,int fim, int procurado)
{
    
    int meio = (inicio + fim) / 2;
   
   if (inicio <= fim){
        if (v[meio] == procurado){              
           return meio;      
        }
        else if (v[meio] < procurado)
            return busca(v, inicio, meio -1,procurado);
        else
            return busca(v,meio + 1, fim, procurado);       
   }        
   return -1;
}
