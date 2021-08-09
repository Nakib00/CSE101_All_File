/* Take two number from user and calculat it's factoriul */

#include <iostream>
using namespace std;

int main()
{
    int i,n,sum;
        sum=1;                    /* In the case of multification must use 1 not 0 */
        cout<<"Enter a number :";
        cin>>n;
        
    for(i=1; i<=n; i=i+1)        /* there is same case i=1 */
    {
       sum=sum*i; 
    }
    
        cout<<"n! = "<<sum;

    return 0;
}
