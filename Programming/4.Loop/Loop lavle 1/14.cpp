/* Take two iinteger number from user and display all the number divisible by 7 */

#include <iostream>
using namespace std;

int main () {
int n,m,i;    
       
        cout<<"Enter First Number =";
        cin>>n;
        cout<<"Enter End Number =";
        cin>>m;
        
    for ( i=n; i<=m-7; i=i+1 ){   /* which number divisible (i<=m-7;)this number */
    if(i%7==0){                  /* if n=10 m=50 i<=50-7 =43 loop work from 43 */
        
        cout<<i<< "," ; 
    }
    }
    for ( i=m-6; i<=m; i=i+1 ){ /* i=50-6 =44 loop work from 44  */
    if(i%7==0){
        
        cout<<i; 
    }
    }
    
return 0;    
}

