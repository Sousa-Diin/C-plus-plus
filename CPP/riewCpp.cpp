//Relembrando Cpp language

#include<iostream>

using namespace std;

struct Interruptor{
	//string comodo;
	string descricao;
	bool status;
	
};

struct Comodo{
	string nome;
	Interruptor interruptor;
};

void insert(Comodo comodo[], int *registros);
//bool processarComando();
void print(string str);
void menu();


int main(){

	int registro = 3;
		
	Comodo comodos = new Comodo[3];	

	bool encerrar = true;
	menu();
	while(encerrar){
		menu();
		
		char cmd;
		cout << "> ";
		cin >> cmd;
		//while(cin >> cmd){
			switch(cmd){
				case 'i':
					print("inserindo");
					insert(comodos, &registro);
					encerrar = true;
					break;
				case 'u':
					print("atualisando");
					encerrar = true;
					break;
				case 'q':
					print("consultando");
					encerrar = true;
					break;
				case 'd':
					print("deletando");
					encerrar = true;
					break;
				case 's':
					print("saindo...");
					encerrar = false;
					break;
				default:
					print("não entendi");
					encerrar = true;
					break;
			}
		
		//}

	}
	delete [] comodos;
	
	return 0;
}

void menu(){
	print("[i] insertion");
	print("[u] update");
	print("[q] query");
	print("[d] delete");
}

bool processarComando(){
	
}

void print(string str){
	cout << str << endl;
}

void insert(Comodo *comodo, int *registros)
{	
	  for(int p = 0; p < *registros; p++){
		  cin.ignore();
		  cout << "Nome do comodo: ";
		  getline(cin, comodo[*registros].nome);
		  cout << "Descricão do interruptor: ";
		  getline(cin, comodo[*registros].interruptor.descricao);
		  comodo[*registros].interruptor.status = false;
      
		  cout << "Comodo adicionado com sucesso" << endl;

		  *registros += 1; // controla quantos comodos existem no vetor de struct
		}
}
