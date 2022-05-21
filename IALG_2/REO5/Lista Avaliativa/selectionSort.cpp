#include <iostream>
using namespace std;

struct Produto
{
    string modelo;
    string marca;
    float preco;
    int quant;
};

void Menu ();
void selectioSort (Produto v[], int t);
int main()
{

    int capacity, op;
    cout << "Digite a capacidae maxima a serem cadastrados: ";
    cin >> capacity;
    
    Produto registro [capacity];
    Menu();
    
  
    do{
        cin >> op;
        switch (op){
    
        case '1':
            cout << "comando1 \n";
            Menu();
            break;
        case '2':
            break;
        case '3':
            break;           
        case '4':
            break;
        case '5':
            system ("exit");
            break;
        }
    
    }while (op > 0 and op !=5);
        
   
    
    return 0;
}
void selectioSort (int v[], int t)
{
    int posMenor;
    int indiceExterno;
    int indiceInterno;
    
    for (indiceExterno = 0; indiceExterno < t - 1; indiceExterno++){
        posMenor = indiceExterno;
        for (indiceInterno = indiceExterno + 1; indiceInterno < t ; indiceInterno++){
            if (v[indiceInterno] < v[posMenor]){
                posMenor = indiceInterno;
            }
        }
        swap (v[indiceExterno],v[posMenor]);
    }
}
void Menu ()
{
    cout <<" 1 - Cadastrar  \n"
         <<" 2 - Ordenar  \n"
         <<" 3 - Listar \n"
         <<" 4 - Alterar \n"
         <<" 5 - Sair \n";
}
