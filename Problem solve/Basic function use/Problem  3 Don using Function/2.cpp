/* Negative and posative*/

#include <iostream>
using namespace std;

void chack_nagative_posative (int);   // function prototype

int main()
{
   int n ;
   
   cout<<"Enter N :";
   cin>>n;
  
   chack_nagative_posative (n);  // function decler 
   
    return 0;
}
//defining a function
void chack_nagative_posative (int n){
    
    if(n>0){
        
        cout<<n<<" Posative";
    }
    else if(n<0){
        
        cout<<n<<" Negative";
    }
    else
    cout<<n<<" zero";
}