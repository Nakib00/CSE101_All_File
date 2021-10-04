/* Take number from user and check if it's a term in the fibonacci sequence.
if it is one of the terms in the fibonacci sequence, print the term number */
   
  
 
#include<iostream>
using namespace std;

 
int main () 
{
  
    int a, b, c, num;
  
    cout<<"Enter any number: ";
  
    cin>>num;
  
                   
    if ((num == 0) || (num == 1)){  /* if num = 3  */
    
        cout<<num<<" term of the Fibonacci sequence";
    }                        
  
    else
    
        a = 0;
      
        b = 1;
      
        c = a + b;   /* c=0+1 =1 */
      
    while (c < num)   /* 1<3 */
	
	{
	  
        a = b;     /* a=1 b=1 c=2 */
	  
        b = c;
	  
        c = a + b;
	
    }
      
    if (c == num) {    
	
        cout<<num<<" term of the Fibonacci sequence";
    }
     else
	
        cout<<num<<" Does not exist in the Fibonacci sequence";
  
return 0;

}


 
 
