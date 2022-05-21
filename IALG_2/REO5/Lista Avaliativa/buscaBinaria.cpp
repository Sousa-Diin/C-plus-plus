/* Questao 4: busca binaria
 * Wildes Sousa
 */
#include <iostream>
using namespace std;

struct Alunos 
{
    int matricula;
    string aluno;
};

int buscaBinaria (Alunos v[], int inicio, int fim, int procurado);
int main ()
{
    int TAM, procurado, encontrado;
    cin >> TAM;
    
    Alunos cadastros [TAM];
    for (int indiceC = 0; indiceC < TAM; indiceC++){
        cin >> cadastros[indiceC].matricula;
        cin >> cadastros[indiceC].aluno;
    }
    cin >> procurado;
    
    
    encontrado = buscaBinaria (cadastros , 0 , TAM-1,procurado);
     if (encontrado != -1){
        cout << cadastros[procurado].matricula << "\n";
        cout << cadastros[encontrado].matricula << "\n";
        cout << cadastros[encontrado].aluno << "\n";
     }else{
        cout << cadastros[encontrado].matricula << "\n";
     }
   
    return 0;
}
int buscaBinaria (Alunos v[], int inicio, int fim, int procurado)
{
    
    
        if (inicio <= fim){
            int meio = (inicio + fim)/ 2;
             
            if (procurado > v[meio].matricula){ 
                cout << v[meio].matricula << "\n";              
                return buscaBinaria (v,meio + 1, fim, procurado);
                                           
            }else if(procurado < v[meio].matricula){
                cout << v[meio].matricula << "\n"; 
                 return buscaBinaria (v,inicio,meio - 1,procurado);
                 
            }else
                cout << v[meio].matricula << "\n";
                return meio;                          
        }  
        return -1;           

}
