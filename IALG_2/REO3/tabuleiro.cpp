#include <iostream>
using namespace std;
#include <cmath>
int main() {
	
	int size;
	int line;
	int column;
	int increment;
	
	cin >> size;
	line = 1;
	while (line <= size)
	{
		column = 1;
		while (column == size)
		{
			if (column % 2 == 0)
				cout << "#";
			else
				cout << "*";
			column++;
		} 
		size--;
		cout << endl;
		line++;
	}
	
}