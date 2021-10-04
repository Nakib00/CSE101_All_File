/* Take two integer number from user and print the lowest common factor (LCF) */

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
        
    for(i=y; i<=x*y ; i=i+1)                
    {
       if((i%x==0) && (i%y==0))    /* here we search x and y which divisibal by i */
       {
           cout<<"LCF ( "<<x<<", "<<y<<" )="<<i<<endl;
           break;
       }
      
    }

    return 0;
}
