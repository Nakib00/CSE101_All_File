/* write a program that will be print all the perfect numbers between two integers entered by the user */

#include <iostream>
using namespace std;

//Function prototype
void perfect_Number (int, int);

int main()
{
    int x,y;

    cout<<"Enter the number x :";
    cin>>x;
    cout<<"Enter the number y :";
    cin>>y;

    perfect_Number (x,y); // call the function
    
    return 0;
}

//define function 
void perfect_Number (int x,int y){
   
  int i,j,sum;
  
  cout<<"The perfect Number is: ";
  
  for(i=x; i<=y; i++){
      
     sum=0;
      
    for(j=1; j<i; j++){
       
       if(i%j==0){
    
        sum+=j;
    }
    }
    
    if(sum==i){
    cout<<i<<" ";
    }
    }
}
   