/* fibonacci */

#include <iostream>
using namespace std;
// declaring a function or function prototype
int fibonacci_sequence (int);

int main()
{
   int n,f1=0, f2=1,f3;
   
   cout<<"Enter N :";
   cin>>n;
   
   f3=fibonacci_sequence (n);
   
   cout<<f1<<" "<<f2<<" "<<f3;
   
    return 0;
}
//defining a function
int fibonacci_sequence (int n){
    int f1=0,f2=1,f3,i;
    for(i=3; i<=n; i++){
        
       f1=f2;
       f2=f3;
    }
    return f3;
}
