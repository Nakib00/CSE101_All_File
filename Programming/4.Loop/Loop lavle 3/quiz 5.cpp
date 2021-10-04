/* 
1 
2 3 
4 5 6 
*/

#include <iostream>
using namespace std;

int main()
{
    int n,i,j,sum=1;
    
    cout<<"Enter N :";
    cin>>n;
    
// row count 
for(i=1; i<=n; i++){

// number printing    
    for(j=1; j<=i; j++){
        
        if(sum<=n){
            
            cout<<sum<<" ";
            sum=sum+1;
        }
    }
     cout<<endl;
}
    
    return 0;
}
