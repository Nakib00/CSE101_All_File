/* Take the value of x and y  from user and calculat x^y with out using prower function.
x can be decimal number and y must be positive integer */

#include <iostream>
using namespace std;

int main()
{
    int i,y;
    float x,sum;
        sum=1;                    /* In the case of multification must use 1 not 0 */
        cout<<"Enter x :";
        cin>>x;
        cout<<"Enter y :";
        cin>>y;
        
    for(i=1; i<=y; i=i+1)        /* there is same case i=1 */
    {
       sum=sum*x;
       
    }
    
        cout<<sum;

    return 0;
}
