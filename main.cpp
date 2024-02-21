//Random Password Generator

#include <iostream>
using namespace std;

string genPassword();

int main()

{   int length;
    int Characters_length;
    int i;
    string Password;
    
    const char Characters [] = "Cihj24Hrvc6A ";
    Characters_length = 12;
    length = 15;
//    cout << "Enter the length of password between 10-16 ";
//    cin >> length;
    srand (time(0));
    cout << "Randomly Generated Password : ";
    for (i = 0 ;
         i < length ;
         i++)
    {
        cout << Characters [ rand() % Characters_length] ;
        
    }
    
}
