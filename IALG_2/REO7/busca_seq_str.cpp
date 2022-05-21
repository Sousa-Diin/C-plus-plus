/* Questão 13: Vetores - Busca sequencial - String
 * name: Wildes Sousa
 * date: 24/04/2022
 * version: v1.22.2
 */
#include <iostream>
using namespace std;

int main ()
{
    string str_1;
    string str_2;
    
    cin >> str_1
        >> str_2;
    
    int tam_str_1 = str_1.size(); 
    int tam_str_2 = str_2.size();
    bool stop = true;
    
    int pos_inicial = -1;
    int indice_str_1 = 0, indice_str_2 = 0;
    
    while ((indice_str_1 < tam_str_1) and (stop)){
        if (str_1[indice_str_1] == str_2[indice_str_2]){
            indice_str_1++;
            indice_str_2++;
        }else
            indice_str_1++;
            
        if (str_1[indice_str_1] != str_2[indice_str_2]){
            indice_str_2 = 0;
            //indice_str_1++;          
        }
        
        if(indice_str_2 == tam_str_2 - 1 ){
            stop = false;
            pos_inicial = indice_str_1 - (tam_str_2 -1);
        }
    }
    
    cout << pos_inicial << endl;
    
    return 0;
}
