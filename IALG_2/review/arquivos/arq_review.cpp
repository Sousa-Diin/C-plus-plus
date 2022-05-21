/* Revisão de arquivos textos
 * entrada e manipulação de dados
 * alteração na memoria e alocação no arquivo  
 */
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Cadastro
{
    unsigned long cpf;
    unsigned long number;
    string nome;
    string email;
};


void alteraCampo (string file_name);

int main()
{
    Cadastro *ptr_pessoa, pessoa;
    *ptr_pessoa = pessoa;
    cout << "Digite o nome do arquivo.txt: ";
    
    string file;
    cin >> file;
    
    ofstream arqEnt(file.c_str());
    
    cin >> pessoa.cpf;
    cin.ignore();
    getline(cin, pessoa.nome);
    cin >> pessoa.number;
    cin.ignore();
    getline(cin, pessoa.email);
    
    arqEnt << pessoa.cpf << "\n"
           << pessoa.nome << "\n"
           << pessoa.number << "\n"
           << pessoa.email;
    
    arqEnt.close();
    
    alteraCampo (file);
    
    return 0;
}
void alteraCampo (string file_name){
    
    char dados [1];
    
    ifstream arqSaida (file_name.c_str());
    
    if (arqSaida){
        while (arqSaida.read(dados, 1)){
            cout << ptr_pessoa->cpf << "\n"
                 << ptr_pessoa->nome << "\n"
                 << ptr_pessoa.number << "\n"
                 << ptr_pessoa.email;
        }
        
    }else{
        cout << "arquivo não existe." << endl;
    }
    
    arqSaida.close();
}
