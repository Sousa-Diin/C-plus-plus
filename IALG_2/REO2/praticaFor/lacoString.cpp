/* Youtube - Judson Santiago: Comparando Strings 
 * copyright © 2022, by Wildes Sousa 
 * version: 1.0
 * date: 04/02/2022
 */
#include <iostream>
using std::cout;// o programa utiliza cout
using std::cin; // o programa utiliza cin
using std::endl;// o programa utiliza endl

#include <cstring>
using std::strcmp;

int main()
{
	char palavra [8] = "?oleque";
	
	for (char ch = 'a'; strcmp( palavra, "moleque"); ch++)
	{
		cout << palavra << endl;
		palavra[0] = ch;
	}
	cout << "A palavra é " << palavra << endl;
        return 0 ;
}
