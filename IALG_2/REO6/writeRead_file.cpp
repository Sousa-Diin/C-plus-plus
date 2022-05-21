/* Exemplo de Arquivos
 * date: 19/04/22
 */
#include<iostream>
#include <fstream>
using namespace std;

void criaFile(int &cont_arq);
void exibeFile(string procurado, int &num_arq);

int main()
{
	int quant_arq = 0;
    criaFile(quant_arq);
    cout << "Deseja visualizar o arquivo? [S/n]\n";
    char verifica; cin >> verifica;
    string busca_arq ;// recebe os arquivo
    switch (verifica){
		case 's':
		case 'S':
			cout << "Entre com o arquivo: ";
			cin >> busca_arq;
	        exibeFile(busca_arq, quant_arq);
			break;
		case 'n':
		case 'N':
        	system("exit");
			break;
    	default :
			cout << "comando invalido!\n";
	}    
    return 0;
}
void criaFile (int &cont_arq)
{
    string name_file_1;
    cout << "Name file: ";
    cin >> name_file_1;
    
    ofstream file_1 (name_file_1.c_str(),ios::app);
    
    string word_file_1;
  
    int i = 0, quant = 5;
    char op;
    file_1 << "\nEntradas de dados: " << endl;
    do {
        
       
            cout << "Write file " << i+1 << " : ";
            cin.ignore();
            getline(cin, word_file_1);
		    
            file_1 << "\n " << i+1 << " - " << word_file_1 << "\n";
            i++;
		    cont_arq += i;
             
        cout << "Deseja contimnuar a inserir? [s/n]\n";
        cin >> op;
    }while(cin >> word_file_1 and op != 'n' and i < quant);
    
    cout << "File save!\n";
    
    file_1.close();
    
}
void exibeFile(string procurado, int &num_arq)
{
	ifstream arq_1 (procurado.c_str());
	
    if(arq_1){
		
		arq_1.seekg(0, arq_1.end);
		int tam = arq_1.tellg();
		arq_1.seekg(0, arq_1.beg);
		
		cout << "Esse é o tamnho do arquivo <"<<tam <<">\n";
		cout << "Esse é o num_arq do arquivo <"<<num_arq <<">\n\n";
		
		char recebido[tam];
		
		arq_1.read(recebido, tam);
		cout.write(recebido, tam);
		
		arq_1.close();
		
	}else
        cout << "arquivo não pode ser aberto!";
}
