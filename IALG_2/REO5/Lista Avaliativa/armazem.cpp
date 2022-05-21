/* Questão 3: Ponteiros - Armazem
 * Wildes Sousa
 * version: v1.22
 */
 
#include <iostream>
using namespace std;

int main()
{
    const int TAM = 12;
    int *v = new int [TAM];
    int procurado;
    
    int bug = 0;
    if (bug < TAM){
        for (int l = 0; l < 2; l++){
            for(int c = 0; c < 2; c++){
                for (int d = 0; d < 3; d++){
                    cin >> v[bug];
                    bug++;
                }
            }
        }
    }
    
    cin >> procurado;
    
    bool parada = true;
    bug = 0;
    for (int l = 0; l < 2; l++){
        for(int c = 0; c < 2; c++){
            for (int d = 0; d < 3; d++){ 
               if(procurado == v[bug]){
                   cout << l << " " << c << " "<< d << " "; 
                   cout << endl;
                   parada = false;                 
               } 
               bug++;          
               
            }
          
        }
    }
    
    if (parada != 0)
        cout << -1 << endl;
    return 0;
}
