/* Questão 1: Matriz - Submatriz de vogais
 * Wildes Sousa
 */
#include <iostream>
using namespace std;

int main()
{
    int indiceL, i;
    cin >> indiceL;
    
    char matriz [indiceL][indiceL];
    for (int i = 0;i < indiceL; i++){
        for (int j = 0;j < indiceL; j++){
            cin >> matriz[i][j];
         }
    }
    
    //int condParada = 0;
    for (i = 0;i < indiceL; i++){
        for (int j = 0;j < indiceL; j++){
            if((matriz[i][j]=='A' or matriz[i][j]=='E' or matriz[i][j]=='I' or
                matriz[i][j]=='O' or matriz[i][j]=='U') and i < indiceL-1 and j < indiceL-1)
				  if(matriz[i][j+1]=='A' or matriz[i][j+1]=='E' or matriz[i][j+1]=='I' or
				     matriz[i][j+1]=='O' or matriz[i][j+1]=='U')
					    if(matriz[i+1][j]=='A' or matriz[i+1][j]=='E' or matriz[i+1][j]=='I' or 
					        matriz[i+1][j]=='O' or matriz[i+1][j]=='U')
						     if(matriz[i+1][j+1]=='A' or matriz[i+1][j+1]=='E' or 
						        matriz[i+1][j+1]=='I' or matriz[i+1][j+1]=='O' or matriz[i+1][j+1]=='U'){
						            cout << matriz[i][j] << " ";
						            cout << matriz[i][j+1] << " \n";
						            cout << matriz[i+1][j] << " ";
						            cout << matriz[i+1][j+1] << " ";
						             i = indiceL;
						             //condParada = i;						             
						     }             
                                    
             
           }cout << endl;
     }
     if (i == indiceL)
        cout << "submatriz nao encontrada" << endl;
    
    return 0;
}

