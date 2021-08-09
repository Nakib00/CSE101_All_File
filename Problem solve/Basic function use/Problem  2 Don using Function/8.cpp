/* swap function */

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
void swap_function (int n , int m){
    
    int temp;
    
    temp = n;
    n = m;
    m = temp; 
    
    cout<<n<<" ";
    cout<<m;
    
}