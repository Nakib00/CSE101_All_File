/* Take number from user and display it's divisore */

#include <iostream>
using namespace std;

//Function prototype
void divisore (int);

int main()
{
    int x;

    cout<<"Enter the number x :";
    cin>>x;

    divisore (x); // call the function
    
    return 0;
}

//define function 
void divisore (int x){
   
  int i;
  
  for(i=0; i<x; i++){
      
      if(x%i==0){
          
          cout<<i<<" , ";
      }
  }
  cout<<i;
}
   