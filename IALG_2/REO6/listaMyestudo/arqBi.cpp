/* Lista de Estudo - Aplicado por Eu
 * refrncia by: Professor Judson Santiago - youtube
 * version: v1.22
 */
#include <iostream>
#include <fstream>
using namespace std;

struct Planeta {
    string nome;
    long double populacao;
    double gravidade;
};

int main()
{
    int tam = 2;
    Planeta p = {"Marte", 68204, 9.81};
    
    ofstream fout;
 
    fout.open ("planetas.dat", ios_base::out | ios_base::binary);
    if (!fout){
        cout << "Arquivo não pode ser aberto!" << endl;
        system("pause");
        return EXIT_FAILURE;
    }
    fout.write ((char *) &p, sizeof(Planeta));
    fout.close();
    
    
    ifstream fin;
    fin.open("planetas.dat", ios_base::in|ios_base::binary); 
   // fin.read((char *) &n, sizeof(Planeta));
    
    if (fin){
        while (fin.read((char *) &p, sizeof(Planeta))){
            cout << "Exibe nome do planeta: " << p.nome << endl;
            cout << "Exibe populacao do planeta: " << p.populacao << endl;
            cout << "Exibe gravidade do planeta: " << p.gravidade << endl;
        }
    }
    
    fin.close();
        
    fout.open ("planetas.dat", ios_base::out |ios_base::app | ios_base::binary);
    if (!fout){
        cout << "Arquivo não pode ser aberto!" << endl;
        system("pause");
        return EXIT_FAILURE;
    }
    cout << "\nNome do planeta: ";
    cin >> p.nome;
    cout << "\nPopulacão: ";
    cin >> p.populacao;
    cout << "\nGravidade: ";
    cin >> p.gravidade;
   
    fout.write((char *)&p, sizeof(Planeta));
    fout.close();
    
    fin.open("planetas.dat", ios_base::in |ios_base::binary);
    if (fin.is_open()){
        cout << "\nAqui está o conteùdo do arquivo:" <<endl;
        while (fin.read((char *)&p, sizeof(Planeta))){
            cout << p.nome << " "<< p.populacao << " "
                 << p.gravidade << endl;
        }
        fin.close();
    }
    return 0;
}
