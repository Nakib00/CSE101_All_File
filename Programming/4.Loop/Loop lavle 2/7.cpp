/* Take a number from user and chack if it is a armstorng number */

#include <iostream>  
using namespace std;  

int main(){

    int n,r,sum,temp; 
    sum=0;
     cout<<"Enter the Number=  ";    
     cin>>n;    
     temp=n;    
    while(n>0)      /* 153 = (1*1*1)+(5*5*5)+(3*3*3) */
    {    
       r=n%10;                      
       n=n/10;
       sum=sum+(r*r*r);  
    }    
    if(temp==sum)    
     cout<<"Armstrong Number.";    
    else    
     cout<<"Not Armstrong Number.";   
return 0;  
}  
