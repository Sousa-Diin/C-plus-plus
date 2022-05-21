#include <iostream>
using namespace std;

//#define tam 100

int main()
{
	/*string texto = "Para aprender a programar, eu devo práticar.";
	for (int i = 0; i < tam; i++)
		cout << texto << endl;
	*/
	string vetor[5] = {"joão","maria", "pedro", "thiago", "carlos"};
	for (int i = 0; i < 5; i++) {
    		cout << vetor[i] ;
	}
	cout << endl;

	for (string t : vetor) {
    		t = "X" + t + "X";
	}
	for (string& t : vetor) {
    		t = " " + t + " ";
	}
	for (string t : vetor) {
    		cout << t;
	}
	cout << endl;
	string teste = "Ola, mundo!";
	for (char& c: teste) {
    		cout << c << " ";
	}
	cout << endl;

	
	return 0;
}
