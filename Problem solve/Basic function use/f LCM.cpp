/* LCH use function */

#include <iostream>
using namespace std;
// function pototyp
int LCM (int, int);

int main()
{
   int x,y,swap, lcm;
    
    cout<<"Enter 1.Number :";
    cin>>x;
    cout<<"Enter 2.Number :";
    cin>>y;
    
    if(x > y )
    { 
        swap=x;
        x=y;             /* if user enter big number in x that's why we use this */ 
        y=swap;
    }
    
    lcm = LCM (x, y);
    
    cout<<lcm;

    return 0;
}
// defining function 
int LCM (int x , int y){
    int i;
    
    for(i=y; i<=x*y; i++){
        
       if((i%x==0) && (i%y==0)){
           
         break;
       }
       
    }
    
    return i;
}