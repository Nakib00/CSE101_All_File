/* Write a program that conts the number of digits in given integer */

#include <iostream>
using namespace std;

int main() {

    int num,i;
    cout << "Enter any number : ";
    cin >> num;
    
    while(num>=10){
        
        num=num/10;
        i=i+1;
        
    }
    
     cout<<"Number of digits: "<<i+1;

    return 0;
}
