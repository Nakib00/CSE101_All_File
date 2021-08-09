/* Write a program that display following number sequence.
Make sure there is no extra comma.2,2.25,2.50,2.75..4 
Must use float this is 0.25
when we want stop , than we use this tipe of code*/


#include <iostream>
using namespace std;

int main(){
float i;    
    
    for( i=2; i<4; i=i+0.25 ){   
        
        cout<<i<< ","; 
    }
    
       cout<<i;
    
return 0;    
}
