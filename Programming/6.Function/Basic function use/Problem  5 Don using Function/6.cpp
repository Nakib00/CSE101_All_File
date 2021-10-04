/* Take a number from user and chack if it is a perfect number */

#include <iostream>
using namespace std;

//Function prototype
void perfect_number (int);

int main()
{
    int x;

    cout<<"Enter the number x :";
    cin>>x;

    perfect_number (x); // call the function
    
    return 0;
}

//define function 
void perfect_number (int x){
   
  int i,sum=0;
  
  for(i=1; i<x; i++){
      
      if(x%i==0){
          
          sum=sum+i;
      }
  }
  
  if (sum == x)
    cout<< x <<" perfect.";
  else
    cout<< x <<" not perfect.";
 
}
   