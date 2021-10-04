/* chack even or odd*/

#include <iostream>
using namespace std;

void chack_even_odd (int);   // function prototype

int main()
{
   int n ;
   
   cout<<"Enter N :";
   cin>>n;
  
   chack_even_odd (n);  // function decler 
   
    return 0;
}
//defining a function
void chack_even_odd (int n){
    
    if(n%2==0){
        
        cout<<n<<" Even Number";
    }
    else{
        
        cout<<n<<" Odd Number";
    }
}