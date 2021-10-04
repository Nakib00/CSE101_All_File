/* 9.Write a program that swaps the values without using a 3rd variable. */

#include <iostream>
using namespace std;

void swap_function (int , int);   // function prototype

int main()
{
   int n,m , swap;
   
   cout<<"Enter N :";
   cin>>n;
   cout<<"Enter M :";
   cin>>m;
   
   cout<<"Before swap"<<endl;
   cout<<n<<" ";
   cout<<m<<endl;
   
   cout<<"After swap"<<endl;
   
   swap_function (n ,m );  // function decler 
   
    return 0;
}
//defining a function
void swap_function (int x , int y){
    
    x=x+y; 
    y=x-y;
    x=x-y;
    
    cout<<x<<" ";
    cout<<y;
    
}