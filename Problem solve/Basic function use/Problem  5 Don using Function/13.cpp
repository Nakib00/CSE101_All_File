/* Take number from user and check if it's a term in the fibonacci sequence.
if it is one of the terms in the fibonacci sequence, print the term number */

#include <iostream>
using namespace std;

//Function prototype
void fibonacci_term (int);

int main()
{
    int x;

    cout<<"Enter the number x :";
    cin>>x;

    fibonacci_term (x); // call the function
    
    return 0;
}

//define function 
void fibonacci_term (int x){
   
  int i,a,b,c;

   if ((x == 0) || (x == 1)){
       
       cout<<x<<" term of the Fibonacci sequence";
   }
   else
    a = 0;
    b = 1; 
    c = a + b;
    
    while (c < x){
        a=b;
        b=c;
        c=a+b;
    }
    if (c == x) {
    cout<<x<<" term of the Fibonacci sequence";
    }
    else
    cout<<x<<" Does not exist in the Fibonacci sequence";
}
   