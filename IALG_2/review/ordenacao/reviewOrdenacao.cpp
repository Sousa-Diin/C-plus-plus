/* Review de Ordenação ...
 * Date: 27/01/2022 new date -> 25/04/2022
 * version: 1.21.1  new --v  -> v2.22.0
 * copyright © 2022, by Wildes Sousa 
 
 
 // TESTES
    esp32 65.34 1 robobuilder
    rele8 54.00 1 robobuilder
    esp32 55.41 1 amazon
    ponteH 76.35 1 mercado
    bomba 52.00 1 felipe
    celula 18.79 3 robobuilder 
    rele4 23.00 7 aliexpress
    rele16 113.00 1 aliexpress
    rele2 19.80 6 americanas
    rele6 33.50 5 robobuilder
 */
#include <iostream>
#include <cstring>
#include <iomanip>
#include <fstream>
using namespace std;

#include <string>
using std::string;


struct Produto 
{
	string nome;
	float preco; 
	int und;
	string company;
};

int buscaBinaria (Produto v[], int ini, int fim, Produto busca);
void exibeFile(string buscado, int &num_arq);
void criaFile (int &cont_arq);
void insertionSort (Produto v[], int tam);
void selectionSort (Produto v[], int tam);
void bubbleSort (Produto v[], int tam);
void exibe(Produto v[], int t);
void Menu();

// FUNCAO PRINCIPAL - INICIO
int main()
{

    
    int n = 10, i;
    char menu;
    
	Produto produto[n],procurado;
	int opcao;
        //Exibe menu
        Menu();

        cin >> opcao;

        while (opcao != 7){
                if (opcao == 1){
                      
                      cout << "Numero de cadastro: " << n << endl;
                      //cin >> n;
    
                        //Ler dados a partir de um arquivo e imprimir
                     for ( i = 0; i < n; i++){
	                    //cin.ignore();
	                    //cout << "\nEntre com " << i+1 << " dados: ";
	                    cin >> produto[i].nome;
	                    //cin.ignore();
	                    cin >> produto[i].preco
	                        >> produto[i].und;
	                    //cin.ignore();
	                    cin >> produto[i].company;
	                 }
	                 Menu();
	                 cin >> opcao;
                }
                if (opcao == 2){
                        //Ler dados a partir do teclado e adicionar os dados lidos ao arquivo
                        system("clear");
	                    insertionSort (produto, n);
	                    cout << "Impressão ordenado-(insertion) pelo campo preco: \n";
	                    cout << "\n\nNOME\t\tPREÇO\t\t\tUND\t\tEMPRESA\n\n";
                        exibe(produto,n);
                        Menu();
	                    cin >> opcao;
                }
                if (opcao == 3){
                        //Imprimir os dados do arquivo ordenados pelo campo 'nome'
                        bubbleSort (produto, n);
	                    system("clear");
	                    cout << "Impressão ordenado-(bubble) pelo campo nome: \n";	
	                    cout << "\n\nNOME\t\tPREÇO\t\t\tUND\t\tEMPRESA\n\n";            
                        exibe(produto,n);
                        Menu();
	                    cin >> opcao;
                }
                if (opcao == 4){
                        //Imprimir os dados do arquivo ordenados pelo campo 'CPF'
                        system("clear");
	                    selectionSort (produto, n);
	                    cout << "Impressão ordenado-(selection) pelo campo empresa: \n";
	                    cout << "\n\nNOME\t\tPREÇO\t\t\tUND\t\tEMPRESA\n\n";
                        exibe(produto,n);
                        Menu();
	                    cin >> opcao;
                }
                if (opcao == 5){
                        //Buscar um conjunto de informações a partir do campo 'CPF'
                        cout << "Entre com a busca: ";
	                    cin >> procurado.nome;
	                  
	                    int encontrado = buscaBinaria (produto,0,n,procurado);
	                    if (encontrado != -1){
	                        cout << "\n\nNOME\t\tPREÇO\t\t\tUND\t\tEMPRESA\n\n";
	                        cout << produto[encontrado].nome << "\t\t"
	                            << fixed << setprecision(2)
	                            << "R$ " << produto[encontrado].preco << "\t\t";
	                        cout << produto[encontrado].und << "\t\t"
	                             << produto[encontrado].company << "\n";
	                        cout << endl<<"Total de " <<procurado.nome << " R$ " << produto[encontrado].preco * (float)produto[encontrado].und <<endl;
	                    }
	                    if (opcao == 6){
                        //Imprimir os dados do arquivo ordenados pelo campo 'CPF'
                        system("clear");
	                    criaFile(produto,n);
	                    //cout << "Impressão ordenado-(selection) pelo campo empresa: \n";	
	                                                         
                        Menu();
	                    cin >> opcao;
                }
	                    else
	                        cout << "Item não encontrado!\n\n";	                                    
	                  Menu();
	                  cin >> opcao;
                }
                if (opcao == 7){
                        //Sair
                        exit(0);
                }
                if (opcao <1 or opcao > 7){
                        cout << "Opção inválida." << endl;
                }       
        //cout << "\nOrdenar por qual campo: \n[1] - PREÇO\n[2] - NOME\n[3] - EMPRESA\n[4] - BUSCA\n ";
	   }     
	return 0;
}
// FUNCAO PRINCIPAL - FIM

int buscaBinaria (Produto v[], int ini, int fim, Produto busca)
{
    int meio = (ini + fim) / 2;
    if (ini <= fim){
        if (v[meio].nome == busca.nome){
            return meio;
            ini = fim+1;
        }
        else if (v[meio].nome > busca.nome)
            return buscaBinaria (v, ini, meio - 1, busca);
        return buscaBinaria (v, meio + 1, fim, busca);
    }
    return -1;
    
}
void bubbleSort (Produto v[], int tam)
{
    Produto elemento_aux;
    for (int i = 0; i < tam - 1; i++){
        for (int j = 0; j < tam -1-i; j++){
            if (v[j].nome > v[j+1].nome){
            elemento_aux = v[j];
            v[j] = v[j+1];
            v[j+1]= elemento_aux;
            }
        }
    }
}
void insertionSort (Produto v[], int tam)
{
    Produto elemento_pivo;
    int i, j;
    
    
        for (i = 1; i < tam; i++){
            elemento_pivo = v[i];
            j = i-1;
            while ((j >= 0) && (elemento_pivo.preco < v[j].preco)){
                v[j+1] = v[j];
                j--;
            }
            v[j+1] = elemento_pivo;
        }           
}
void selectionSort (Produto v[], int tam)
{
    int elemento_menor;
    Produto troca_elemento;
    for (int i = 0; i < tam-1; i++){
        elemento_menor = i;
        for (int j = i + 1; j < tam; j++){
            if (v[j].company < v[elemento_menor].company)
                elemento_menor = j;          
        }
        troca_elemento = v[elemento_menor];
        v[elemento_menor]  = v[i];
        v[i] = troca_elemento;
    }
    
}
void exibe(Produto v[], int t)
{
     
    if (t == 1){
        cout << v[t-1].nome << "\t\t"
             << fixed << setprecision(2)
	         << "R$ " << v[t-1].preco << "\t\t";
	    cout << v[t-1].und << "\t\t"
	         << v[t-1].company << "\n";
    }
    else{
        exibe(v, t-1);
        cout << v[t-1].nome << "\t\t"
             << fixed << setprecision(2)
	         << "R$ " << v[t-1].preco << "\t\t";
	    cout << v[t-1].und << "\t\t"
	         << v[t-1].company << "\n";
    }
}

void Menu(){
        cout<< "Digite uma das opções a seguir:\n\n";
        /*
        cout<<"1 - Ler dados a partir de um arquivo e imprimir\n";
        cout<<"2 - Ler dados a partir do teclado e adicionar os dados lidos ao arquivo\n";
        cout<<"3 - Imprimir os dados do arquivo ordenados pelo campo 'nome'\n";
        cout<<"4 - Imprimir os dados do arquivo ordenados pelo campo 'CPF'\n";
        cout<<"5 - Buscar um conjunto de informações a partir do campo 'CPF'\n";
        cout<<"6 - Sair\n";*/
        cout << "\n[1] - INSERIR DADOS\n[2] - ORDENAR - INSERTION - preco\n[3] - ORDENAR - BUBBLE - nome\n[4] - ORDENAR - SELECTION - empresa\n[5] - BUSCAR POR PRODUTO\n[6] - ARQUIVAR\n[7] - SAIR\n ";
}
void criaFile (Produto v[],int tam)
{
    string name_file_1;
    cout << "Name file: ";
    cin >> name_file_1;
    
    ofstream file_1 (name_file_1.c_str(),ios::app);
    
    Produto *novo_produto = new Produto[tam];
    memcpy (novo_produto, v,sizeof(Produto) +1);
    file_1 << "\nEntradas de dados: \n";
    for (int i = 0; i < tam; i++){
        file_1.write ((char *) &novo_produto, sizeof(novo_produto)); 
       // tamanho++;
    }
         
    cout << "File save!\n";
    
    file_1.close();
    delete [] novo_produto; 
}
void exibeFile(string buscado, int &num_arq)
{
	ifstream arq_1 (buscado.c_str());
	string recebido[num_arq];
    if(arq_1){
		for (int i = 0; i < num_arq; i++){
			while (arq_1 >> recebido[i]){
			cout << recebido[i];
			arq_1.close();
			}
		}
	}
}

