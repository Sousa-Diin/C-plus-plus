#include <fstream>
#include <iostream>
using namespace std;

int main ()
{
   string nome_arq; cout << "Entre com nome do arquivo: ";cin >> nome_arq;
   ifstream entrada (nome_arq.c_str()); 
   /* ou
    * ifstream entrada;
    * entrada.open("teste3.txt");
   */
   
   if (entrada){
        entrada.seekg(0, entrada.end);
        int tam = entrada.tellg();
        entrada.seekg(0, entrada.beg);
        
        cout << tam << endl << endl;
        char bloco[tam];
        entrada.read(bloco, tam);
        cout.write (bloco, tam);
   }else
        cout << "arquivo não pode ser aberto!";
    
    return 0;
}
