/* s=1!+2!+3!+...+n! */

#include <iostream>
using namespace std;
// declaring a function or function prototype
int power (int , int);
int sum_of_number (int);
int main()
{
   int n,sum;
   cout<<"Enter the N:";
   cin>>n;
   
   sum=sum_of_number (n);
  
  cout<<"sum of the number is :"<<sum;
  
    return 0;
}
//defining a function
int sum_of_number (int n){
    
    int i,s=0;
    
    for(i=1; i<=n; i++){
        
        s= s + power ( n , i);
    }
    
    return s;
}
int power (int n , int i){
    int j, m=1;
    
    for(j=1; j<=i;j++){
        
        m=m*i;
    }
    return m;
}
