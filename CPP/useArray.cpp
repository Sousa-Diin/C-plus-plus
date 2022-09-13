// Reiew about Array
#include <iostream>

using namespace std;

struct User{
	string nome;
	string login;
	string senha;
};

int main () {
	int tam;
	cout << "Entre com o tamanho da lista: ";
	cin >> tam;
	User usuarios [tam];
	
	for (int u = 0; u < tam; u++){
		cout << "\nnome: ";
		cin >> usuarios[u].nome;
		cout<< "\nlogin: ";
		cin >> usuarios[u].login;
		cout<< "\nsenha: ";
		cin >> usuarios[u].senha;
		
	}
	system("clear");
	string op;
	cout << "\nDeseja ver a lista?" << endl;
	cin >> op;
	if(op == "sim"){
		for(User u : usuarios){
			cout << "Nome: " << u.nome 
				 << "\nLogin: " << u.login
				 << "\nSenha: " << u.senha << "\n\n";
		}
	}else {
		cout << "Saindo..." << endl;
	}
	
	
	//cout << " Olha nois de novo " << endl;

	return 0;
}
