/* write a program that will be print all the primr numbers between two integers entered by the user */

#include <iostream>
using namespace std;

int main()
{
    int n,m,i,j,isprime;
    
    cout<<"N :";
    cin>>n;
    cout<<"M :";
    cin>>m;
    
// i contains number within the rang [m,n]

    for(i=n; i<=m; i++){

// chake if i prime or notprime 

    isprime=1;
    for(j=2; j<i; j++){
        
        if(i%j==0){
            isprime=0;
            break;
        }
        
    }
    
    if(isprime==1){
        cout<<i<<" ";
    }
    
    }

    return 0;
}
