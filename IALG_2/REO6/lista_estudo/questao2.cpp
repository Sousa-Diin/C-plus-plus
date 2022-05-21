/* Questão 2: Arquivos - Leitura Básica de Arquivos
 * Wildes Sousa
 * version: v1.22
 */
#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
    string nome_arq;
    string frase;
    cin >> nome_arq;
        
    ofstream file (nome_arq.c_str(),ios::app);
    
    cin >> frase;
    file << frase;
    
    file.close();
    frase = "NULL";
    //cout << "Frase recebe NULL: " << frase << endl; TESTE
    ifstream fileOut (nome_arq.c_str());
    if(fileOut){
        while (fileOut >> frase){
            cout << frase << endl;
        }
    }
    return 0;
}
