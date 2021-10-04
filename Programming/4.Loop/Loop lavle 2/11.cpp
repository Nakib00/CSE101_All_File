/* Take the number of turms n from user and disolay the flowing sris 1-2+3-4+5-..+n turms=? */

#include<iostream>
using namespace std;

int main(){
    int n, sum=0, a=0, b=0, i;
 
    cout<<"Enter a Number :";
    cin>>n;
    
    for(i=1;i<=n;i=i+1)
    {
        if(i%2==0)         // if i=1,2,3,4
        {
            cout<<i<<"+";  // 2+4+
            a=a+i;         // a=0+2+4=6
        }
        else
        {
            cout<<i<<"-"; // 1-3-
            b=b+i;        // b=0+1+3=4
            
        }
        if(a>b) 
        {
            sum=a-b;    // sum= 6-4 = 2
        }
        else
        {
            sum=b-a;
        }
    }
    
    cout<<"\b="<<sum;   // cout sum 
    
return 0;
    
}

