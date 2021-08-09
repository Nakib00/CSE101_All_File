/* Write a program that display following number sequence.
Make sure there is no extra comma.1,3,5,7...73 
when we want stop , than we use this tipe of code*/


#include <iostream>
using namespace std;

int main () {
int i;    
    
    for ( i=1; i<73; i=i+2 ){   
        
        cout<<i<< ","; 
    }
    
        cout<<i;
    
return 0;    
}
