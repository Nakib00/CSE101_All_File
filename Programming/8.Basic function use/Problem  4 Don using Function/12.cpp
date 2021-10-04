/* Write a program that count that how many digit give user */

#include <iostream>
using namespace std;

//Function prototype
void enter_number (int);

int main()
{
    int x,y;
    cout<<"Enter start number :";
    cin>>x;

    enter_number (x); // call the function

    return 0;
}

//define function 
void enter_number (int x){
   
   int i;
   
   while(x>=10){
       
       x=x/10;
       i=i+1;
   }
   cout<<"Number of digits: "<<i+1;
}