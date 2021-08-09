/* Take the number of turms n from user and disolay the flowing sris 1-2+3-4+5-..+n turms=? */

#include <iostream>
using namespace std;

//Function prototype
void turms_number (int);

int main()
{
    int x;

    cout<<"Enter the number x :";
    cin>>x;

    turms_number (x); // call the function
    
    return 0;
}

//define function 
void turms_number (int x){
   
  int i,sum=0, a=0,b=0;
  
  for(i=1; i<x; i++){
      
      if(i%2==0){
          
          cout<<i<<" + ";
          a=a+1;
      }
      else{
          
          cout<<i<<" - ";
          b=b+1;
      }
      if(a>b){
          
          sum=a-b;
      }
      else {
          
          sum=b-a;
      }
  }
  cout<<"="<<sum;
  
}
   