#include <iostream>
using namespace std;

int main(){

    int numbere[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter number" << i << endl;
        cin >> numbere[i];
        
    }
    
    int sum = numbere[0] + 
    numbere[1] + 
    numbere[2] + 
    numbere[3] + 
    numbere[4] ;
 
    int avg = sum / 5;

    cout << "sum = " << sum << endl;
    cout << "avg = " << avg << endl;
}