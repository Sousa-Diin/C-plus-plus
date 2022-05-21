#include <iostream>
#include <string>
using namespace std;

float converteMetro(float &centimetro);
float converteCentimetro(float &metro);
int main(void) 
{
	float unidade;
	string conversao;
	cin >> unidade >> conversao;
	if (conversao == "metro")
	{
		cout << converteMetro(unidade) << " m" << endl;
	}
	else if(conversao == "centimetro")
	{
		cout << converteCentimetro(unidade) << " cm" << endl;
	}else
		cout << "ERRO" << endl;
	
 
}
float converteMetro(float &centimetro)
{
	float metro = centimetro /100.0;
	return metro;
}
float converteCentimetro(float &metro)
{
	int centimetro = metro *100;
	return centimetro;
}