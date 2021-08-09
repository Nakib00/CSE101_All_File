/* isprime */

#include <iostream>
using namespace std;

void isprime_number (int);   // function prototype

int main()
{
   int n,prime;
   
   cout<<"Enter N :";
   cin>>n;
   
   isprime_number (n);  // function decler 
   
    return 0;
}
//defining a function
void isprime_number (int n){
    
    int i, prime = 1;
    
    for(i = 2; i<n; i++){
        
        if(i/n==0){
            
            prime = 0;
            break;
        }
    }
    if (prime==1){
      cout<<n<<" is a prime number"<<endl;
    }
   else{
       cout<<n<<" is not a prime number"<<endl;
    }
      
}
