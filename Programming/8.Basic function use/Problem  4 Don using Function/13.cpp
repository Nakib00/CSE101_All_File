/* Write a program that taks number from user and display revers number */

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
   
   int r;
   cout<<"Reversd Number:";
   while(x>=10){
       
       r=x%10;
       x=x/10;
       
       cout<<r;
   }
   cout<<x;
}