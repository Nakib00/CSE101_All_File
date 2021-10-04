/* write a program that will be print all the prime numbers between two integers entered by the user */

#include <iostream>
using namespace std;

//Function prototype
void prime (int, int);

int main()
{
    int x,y;

    cout<<"Enter the number x :";
    cin>>x;
    cout<<"Enter the number y :";
    cin>>y;

    prime (x,y); // call the function
    
    return 0;
}

//define function 
void prime (int x,int y){
   
  int i,j,isprime;
  
  for(i=x; i<=y; i++){
      
      isprime=1;
      
      for(j=2; j<i; j++){
    
    if(i%j==0){ 
     
     isprime=0; 
    break;
     }
    }
    if(isprime==1){
        
        cout<<i<<" ";
    }
    }
}
   