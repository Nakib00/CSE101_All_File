/* Take two integer number from user and print the hight common factor (HCF) */

#include <iostream>
using namespace std;

int main()
{
    int i,x,y,sum,swap;
        sum=1;                    
        cout<<"Enter 1.Number :";
        cin>>x;
        cout<<"Enter 2.Number :";
        cin>>y;
        
    if(x > y )
    {
       swap=x;
       x=y;                        /* if user enter big number in x that's why we use this */
       y=swap;
    }
        
    for(i=x; i>0; i=i-1)           /* we want HFC that's why start from x and i=i-1 */        
    {
       if((x%i==0) && (y%i==0))    /* here we search i which divisibal by x and y */
       {
           cout<<"HCF ( "<<x<<", "<<y<<" )="<<i<<endl;
           break;
       }
       
    }

    return 0;
}
