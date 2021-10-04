/* Write a program that takes a 3 digit positive integer from
the user and then prints the reversed numb er.For example, if
the user enters 289, the program print s 982. */

#include <iostream>
using namespace std;

int revers (int);   // function prototype

int main()
{
   int n , rev;
   
   cout<<"Enter N :";
   cin>>n;
  
   rev = revers (n);  // function decler 
  
   cout<<"Before Revers"<<endl;
   cout<<n<<endl;
  
   cout<<"After Revers"<<endl;
   
    
    
    cout<<rev;
   
    return 0;
}
//defining a function
int revers (int n){
    
    int r , num;
    while (n !=0) { 
        
        r=n%10; 
        
        num=num*10+r;
        
        n=n/10; 
        
    }
    
    return num;
}