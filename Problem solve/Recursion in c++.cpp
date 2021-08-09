#include <iostream>
using namespace std;

int fact(int);

int main()
{
   
   int x,f;
   
   cout<<"Enter Number :";
   cin>>x;
   
   f = fact(x);
   
   cout<<"Factorial :"<<f;

    return 0;
}
int fact(int n){
    
    //base case
    
    if(n==1){
        
        return 1;
    }
    else{
        
        return (n * fact(n - 1));
    }
    
}
