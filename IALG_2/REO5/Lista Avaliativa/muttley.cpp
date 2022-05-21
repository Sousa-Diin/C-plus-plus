#include <iostream>
using namespace std;

long calcHash (string palavra)
{
    const int UMPRIMO = 37;
    const int M = 15;
    long hash = 0;

    for (unsigned j = 0; j < palavra.size(); j++) {
           hash = (UMPRIMO * hash + palavra[j]) % M;   
    }
    return hash;
}

int main()
{
    //Entrada da quant. de elemento do Vet
    int TAM;
    cin >> TAM;
    
    string vet_palavras [TAM];
    
    for (int indiceP = 0; indiceP < TAM; indiceP++){
        cin >> vet_palavras[indiceP];
    }
    //cout << "SAIDA: \n";
    int soma_hash = 0;
    for (int indiceP = 0; indiceP < TAM ; indiceP++){
        cout << calcHash (vet_palavras[indiceP])  << " ";
        soma_hash += calcHash (vet_palavras[indiceP]);
    }
    
    cout << soma_hash << endl;
    return 0;
}
