/* Write a program that display following number sequence.
Make sure there is no extra comma. 0,1,2,3,….99 
when we want stop , than we use this tipe of code*/


#include <iostream>
using namespace std;

int main(){
  int i;    
    
    for ( i=0; i<99; i=i+1 ){   
        
        cout<<i<< ","; 
    }
    
        cout<<i;
  
    
    return 0;
}
