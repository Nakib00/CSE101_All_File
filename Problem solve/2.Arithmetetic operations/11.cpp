/*Take an integer from the user and print the last digit of that number. 
For example, if the user enters 10773, the program prints 3.*/

#include<iostream>
using namespace std;

int main () {
int num,lest;

    cout<<"Enter any number=";
    cin>>num;
                                                                
lest=num%10;

    cout<<"This is the Lestdigit="<<lest;
return 0;
}
