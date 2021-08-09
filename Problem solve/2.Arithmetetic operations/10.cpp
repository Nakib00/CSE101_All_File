/*Write a program that takes a 3-digit positive integer from
the user and then prints the reversed number. 
For example, if the user enters 289, the program prints 982.*/

#include <iostream>
using namespace std;
int main () {
int num,x,y,z,revers;

    cout<<"Enter the Number=";
    cin>>num;

x=num/100;      /* If num=568 x=568/100=5.68 y=(568%100)/10=56.8 z=568%10=56.8 revers=(100*56.8)+(10*56.8)+5.68=865*/
y=(num%100)/10;
z=num%10;
revers=(100*z) + (10*y) + x;

     cout<<"This is Revers="<<revers;
return 0;
}
