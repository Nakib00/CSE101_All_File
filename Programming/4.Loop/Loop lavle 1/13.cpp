/* Write a program that take integer number from user and display reversd number */

#include <iostream>
using namespace std;

int main() {

    int x,r;
    cout << "Enter any number : ";
    cin >> x;
    cout<<"Reversd Number:";
    while(x>=10){
        
        r= x % 10;  
        cout<<r;
        x= x / 10;
    }
     
     cout<<x;

    return 0;
}

