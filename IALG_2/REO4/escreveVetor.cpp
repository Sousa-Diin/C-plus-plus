#include <iostream>
using namespace std;

void saidaVetor (char vetor[], int tam);
int main()
{
    int capacity;
    cin >> capacity;
	
    int i;
    char vet [capacity];
	
	 i = 0;
	while (i < capacity)
	{
		cin >> vet [i];
		i++;
	}
	
	saidaVetor (vet, capacity);
	
    return 0 ;
}

void saidaVetor (char vetor[], int tam)
{
    int i = 0;
	cout << "[";
    while (i < tam ){
        cout << vetor[i] ;
        i++;     
    }
    if ( vetor[i] == ' ') 
    	vetor[i] = ",";
    
	cout << "]";
	cout << endl;

}
