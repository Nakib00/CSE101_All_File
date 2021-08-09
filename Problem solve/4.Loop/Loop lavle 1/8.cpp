/* Take two integers from user and display all the ODD between them */ 

#include <iostream>
using namespace std;
int main () {

int n,m,i;
cout<<"Enter First Number =";
cin>>n;
cout<<"Enter End Number =";
cin>>m;

for(i=n; i<=m-2; i=i+1){  /* which number divisible (i<=m-2;)this number */
    if(i%2!=0){
        
        cout<<i<<",";
    }
}
for(i=m-1; i<=m; i=i+1){
    if(i%2!=0){
        cout<<i;
    }
}

return 0;
}