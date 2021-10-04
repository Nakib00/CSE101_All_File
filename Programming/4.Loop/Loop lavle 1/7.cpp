/* Take tow integer from user and display all the integer between them */


#include <iostream>
using namespace std;

int main () {
int n,m,i;    
       
        cout<<"Enter Start Number=";
        cin>>n;
        cout<<"Enter  End  Number=";
        cin>>m;
    for ( i=n; i<m; i=i+1 ){   
        
        cout<<i<< ","; 
    }
    
        cout<<i;
    
return 0;    
}
