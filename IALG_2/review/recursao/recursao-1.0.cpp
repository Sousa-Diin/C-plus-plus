/* Review de Recursao
 * Date: 29/01/2022
 * version: 1.21.1
 * copyright © 2022, by Wildes Sousa 
 */
#include <iostream>
using namespace std;

void contador (int num, int cont = 0 );
int main()
{
	int num; 
	cin >> num;
	contador (num);
    return 0;
}
void contador (int num, int cont )
{
	cout << cont << endl;
	if (num > cont){
	
		contador(num,++cont);
	}
}
