/* Questão 4: Arquivos - Separar pares e ímpares
 * Wildes Sousa
 * version: v1.22
 */
#include <iostream>
#include <fstream>
using namespace std;

#define TAM 10


int main ()
{
    
    int numeros [TAM];
    int i = 0;
    while (i < TAM ){
        cin >> numeros[i];
        i++;
    }
    ofstream fout;
    fout.open ("numeros.dat",ios_base::out | ios_base::binary);
    if(!fout.is_open()){
        cout << "Arquivo não pode ser abreto!" << endl;
        system("pause");
    }
    fout.write ((char *)&numeros, sizeof(int));
    fout.close();
    
    i = 0;
   while(i < TAM){
        cout << numeros[i] << " \n";
        i++;
    }
    
   ifstream fin ("numeros.dat",ios::in | ios_base::binary);
   if (fin.is_open()){
        while (fin.read((char *)numeros,sizeof(int))){
            cout << numeros << " " ;
        }
       
        fin.close();
   }
    cout << endl;
        
    return 0;
}


