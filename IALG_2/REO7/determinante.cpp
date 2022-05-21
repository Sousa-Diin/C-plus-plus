/* Questão 8: Matrizes - Determinante de matriz 4x4
 * Wildes Sousa 
 * date: 25/04/2022 || 9:15
 * version: v1.22
 */
#include <iostream>
using namespace std;

int main()
{
    int l = 4, c = l;
    float matriz [l][c];
    
    for (int i = 0; i < l; i++){
        for (int j = 0; j < c; j++){
            cin >> matriz[i][j];
        }
    }
    
    for (int i = 0; i < l; i++){
        for (int j = 0; j < c; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << endl;
    return 0;
}

