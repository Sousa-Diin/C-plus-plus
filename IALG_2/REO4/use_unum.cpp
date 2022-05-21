/* Questão teste:  Vetores
 * copyright © 2022, by Wildes Sousa 
 * version: v1.22.0
 */
#include <iostream>
using std::cout;// o programa utiliza cout
using std::cin; // o programa utiliza cin
using std::endl;// o programa utiliza endl

enum dias{
	segunda = 2, 
	terca, quarta, 
	quinta, sexta, 
	sabado, domingo};
int main()
{
	int day;
	cin >> day;

	if (segunda == day)
		cout << "GAC109" << endl;
	else if (terca == day)
		cout << "GEA108" << endl;
	else if (quarta == day)
		cout << "GMM108" << endl;
	else if (quinta == day)
		cout << "GQI161" << endl;
	else if (sexta == day)
		cout << "GFT146" << endl;
	else if (sabado == day)
		cout << "Relax" << endl;
	else if (domingo == day)
		cout << "CHURCH" << endl;
	else
		cout << "Não satisfa a nenhum dado.\n";
		
        return 0 ;
}
