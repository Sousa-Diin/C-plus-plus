/* Questao 4: busca binaria
 * Wildes Sousa
 * version: v2.22.2
 */
#include <iostream>
using namespace std;

struct Alunos 
{
    int matricula;
    string aluno;
};

void buscaBinaria (Alunos v[], int inicio, int fim, int procurado);
int main ()
{
    int TAM, procurado, contPos = 0;
    cin >> TAM;
    
    Alunos cadastros [TAM];
    for (int indiceC = 0; indiceC < TAM; indiceC++){
        cin >> cadastros[indiceC].matricula;
        cin >> cadastros[indiceC].aluno;
    }
    cin >> procurado;
    
    
   buscaBinaria (cadastros , 0 , TAM-1,procurado);
     
   cout << endl;
    return 0;
}
void buscaBinaria (Alunos v[], int inicio, int fim, int procurado)
{
        //int contPos = 0;
        //if (inicio < fim ){
            int meio = (inicio + fim)/ 2;
        
            if (procurado == v[meio].matricula){
                    cout << v[meio].matricula << endl;
                    cout << v[meio].aluno << endl; 
            } 
            else{
                if (procurado > v[meio].matricula){       
                    cout << v[meio].matricula << endl; 
                    buscaBinaria (v,meio + 1, fim, procurado);             
                }else if(procurado < v[meio].matricula){          
                    cout << v[meio].matricula << endl;                
                    buscaBinaria (v,inicio,meio - 1,procurado);               
                }else
                      cout << v[meio].matricula << endl;           
             
            }         
       // }
        
        
}
