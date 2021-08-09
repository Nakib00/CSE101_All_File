/*Write a program that takes a decimal number from the user and then prints the 
integer part and the decimal part separately. For example, 
if the user enters 2.718, the program print: Integer part =2 and decimal part=0.718 */

#include<iostream>
using namespace std;

int main () {
float x,z;
int y;

    cout<<"Enter the decimal number:";
    cin>>x;

y=x;                   /* if x=10.5 than y=10.5 '(y=10)' z=(10.5-10) '(z=0.5)' */
z=(x-y);

     cout<<"Integer part:"<<y<<endl;
     cout<<"Fractional part:"<<z;

return 0;
}
