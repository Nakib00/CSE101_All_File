/* chack intiger or floting */

#include <iostream>
using namespace std;

void chack_intager_floting (float);   // function prototype

int main()
{
   float n ;
   
   cout<<"Enter N :";
   cin>>n;
  
   chack_intager_floting (n);  // function decler 
   
    return 0;
}
//defining a function
void chack_intager_floting  (float n){
    
    int x;
    float z;
    
    x=n;
    z=x-n;
    
    if(z==.0){
        
        cout<<n<<" This Number is Integer";
    }
    else{
        
        cout<<n<<" This number is Floating-point";
    }
   
}