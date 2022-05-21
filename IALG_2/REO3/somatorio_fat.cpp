/* Questão 15: Modularização - Somatório, combinação e fatorial
 * Wildes Sousa
 * version: v1.22
 */
#include <iostream>
using namespace std; 
int combinacao (int n, int cont);
void somatorio (int num, int cont);
int fat (int num);
int main ()
{
    int n_fat, cont = 0;
    cin >> n_fat;
       
    somatorio (n_fat, cont);
    

    return 0;
}
int fat (int num)
{
    if (num == 0){
        return 1;
    }else{
        return num * fat (num - 1);
    }
    
}
int combinacao(int n, int cont)
{
    return fat(n)/(fat(cont)*(fat(n-cont)));
}
void somatorio (int num, int cont)
{
    int S = 0;
    while(cont < num){
        S+= combinacao(num, cont + 1);
        cont++;
    }
    cout << S << endl;
}
