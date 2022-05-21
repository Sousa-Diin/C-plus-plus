/* Questão 9: Modularização - Fatorial Duplo
 * copyright © 2022, by Wildes Sousa 
 * version: v1.22.0
 */
#include <iostream>
using std::cout;// o programa utiliza cout
using std::cin; // o programa utiliza cin
using std::endl;// o programa utiliza endl

int fatorialDuplo (int fat);
int main()
{
	int fatorial;
	cin >> fatorial;
	
	cout << fatorialDuplo (fatorial) << endl; 

        return 0 ;
}
int fatorialDuplo (int fat)
{
	if (fat == 0 or fat ==1)
		return 1;
	return fat * fatorialDuplo (fat - 2);
}

