/* Exemplo de Arquivos
 * date: 19/04/22
 */
#include<iostream>
#include <fstream>
using namespace std;

void criaFile();
//void exibeFile();

int main()
{
    criaFile();
    /*cout << "Deseja visualizar o arquivo? [S/n]\n";
    int verifica; cin >> verifica;
    
    if (verifica == 'S' or verifica == 's')
        exibeFile();
    else if (verifica == 'N' or verifica == 'n')
        system("exit");
    else
        cout << "comando invalido!\n";*/
        
    return 0;
}
void criaFile ()
{
    string name_file_1;
    cout << "Name file: ";
    cin >> name_file_1;
    
    ofstream file_1 (name_file_1.c_str());
    
    string word_file_1;
    //cin >> word_file_1;
    int i = 0, quant = 5;
    file_1 << "\nEntradas de dados: \n";
    while (i < quant){
        cin.ignore();
        cout << "Write file " << i+1 << " : ";
        file_1 << "Apagando..";
        getline(cin, word_file_1);
        file_1 << "\n " << i+1 << " - " << word_file_1;
        i++;
    }
    
    
    cout << "File save!\n";
    
    file_1.close();
    
}
/*void exibeFile(string arq, string frase)
{
    string buscado;
    cin >> buscado;

    ifstream arq(buscado.c_str());
    if (arq){
        while (getline (arq, frase)){
            cout << frase << endl;
        }
    }else{
        cout << "file dont found!\n";
    }
    arq.close();
}*/

