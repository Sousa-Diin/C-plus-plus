#include <fstream>
#include <iostream>
using namespace std;

int main ()
{

    string name_file;
    cin >> name_file;
    
    ifstream arquivo_1 (name_file.c_str());
    char dados[1];
    int count = 0, e = 0;
    char vogais_m [5] = {'a','e', 'i','o', 'u'};
    char vogais_M [] = {'A','E', 'I','O', 'U'};
    if (arquivo_1){
        while (arquivo_1.read(dados,1)){
            for(int a = 0; a < 5; a++){
                if(dados[0] == vogais_m[a])
                count++;
            }  
            e++;       
        }
        cout << count << endl;
        arquivo_1.close();
    }else
        cout << "arquivo não pode ser aberto!" << endl;
    return 0;
}
