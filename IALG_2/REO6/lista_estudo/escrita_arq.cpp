/* By - Wildes Sousa - 2022
 * version v1.22
 */
#include <fstream>
#include <iostream>
using namespace std;
void writeFile (string receve_file);
void readFile (string receve);
int main () 
{
    string new_file;
    cin >> new_file;
    writeFile(new_file);
    
    readFile(new_file);
    

    return 0;
}
void writeFile (string receve_file)
{
    string phrase;
    ofstream file_1(receve_file.c_str());
    cin >> phrase;
    file_1 << phrase << endl;
    
    file_1.close();
    //cout <<"File save!\n";
}
void readFile (string receve)
{
    ifstream file(receve.c_str());
    if (file){
        string receve;
        while (file >> receve)
            cout << receve << endl;
        file.close();
    }
}
