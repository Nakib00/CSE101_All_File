/* creat 3 * 5 Array */

#include <iostream>
using namespace std;

int main(){
    
    int n,m,i,j,A[3][5];

    for(i=0; i<3; i++){
        
        for(j=0; j<5; j++){
            
            cout<<"A ["<<i<<"] ["<<j<<"] =";
            cin>>A[i][j];
        }
    }
        for(i=0; i<3; i++){
        
        for(j=0; j<5; j++){
            
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}