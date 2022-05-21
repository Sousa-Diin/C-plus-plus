#include <iostream>
using namespace std;

int main() 
{
	int *vet = new int [10] {14, 18, 21, 24, 27, 30, 37, 41, 33, 12};
	int *new_v = new int [20] {0};
	
	for (int i = 0; i < 10; i++){
		new_v[i] = vet[i];
	}
	
	delete []vet;
	vet = new_v;
	
	for (int i = 0; i < 10; i++){
		cout << new_v[i] << " ";
	}
	cout << endl;
	new_v [12] = 99;
	cout << new_v [12] << endl;
	return 0;
}
