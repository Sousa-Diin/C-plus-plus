#include<iostream>
using namespace std;

int main(){
        int N;
        float S;
        
        cin >> N;
        
        S = 2 / 4 + 6 / 5 + 12 / 6 +float( (( N * (N +1) )/ N + 3 ));
        
        cout << S << endl;

        return 0;
 }       
