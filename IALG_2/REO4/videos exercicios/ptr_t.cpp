#include <iostream>
using namespace std;
//void printNum(char ch);//EXERMPLO 2
//int *getNum(char ch); //EXERMPLO 3
void processar (int *p); //EXERMPLO 4
void saida (int *p); //EXERMPLO 4
int main()
{
//EXERMPLO 1
/*
	int *pi = new int;
	*pi = 1001;
	cout << "Valor inteiro = " << *pi << endl;
	cout << "Localização = " << pi << endl;
	
	double *pd = new double;
	*pd = 500.35;
	cout << "Valor inteiro = " << *pd << endl;
	cout << "Localização = " << pd << endl;
	
	cout << "\nTamanho de pi = " << sizeof(pi) << endl;
	cout << "Tamanho de *pi = " << sizeof(*pi) << endl;
	cout << "Tamanho de pd = " << sizeof(pd) << endl;
	cout << "Tamanho de *pd = " << sizeof(*pd) << endl;
	
	delete pi;
	*pd = 27.5;
	cout << "\nValor inteiro = " << *pi << endl;
	cout << "Localização = " << pi << endl;
	
	cout << "\nValor inteiro = " << *pd << endl;
	cout << "Localização = " << pd << endl;
*/
/*
//EXERMPLO 2
	printNum ('A');
	printNum ('a');
*/	
/*
//EXERMPLO 3
	int *pnum = getNum('A');
	cout << *pnum << endl;
	delete pnum;
	cout << *pnum << endl;
	pnum = getNum('G');
	cout << *pnum << endl;
	pnum = getNum ('a');
	
	cout << *pnum << endl;
*/
//EXERMPLO 4
	int *ptr = new int;
	*ptr = 40;
	
	processar (ptr);
	saida (ptr);
	
	delete ptr; /*Liberação CERTA, pois foi a mesma função que alocou espaço*/
	
	return 0;
}/*
void printNum(char ch) //EXERMPLO 2
{
	int * p = new int {ch};
	cout << *p << endl;
	delete p;
	cout << *p << endl;
}*/
/*
int *getNum(char ch) //EXERMPLO 3
{
	int *p = new int {ch};
	return p;
}*/
void processar (int *p) //EXERMPLO 4
{
	*p *= 100;
	//delete p; /*Liberação errado, ponteiro ainda em uso*/
}
void saida (int *p) //EXERMPLO 4
{
	cout << *p << endl;
	//delete p; /*Liberação incerta, pois não foi a função que alocou memoria*/
}
