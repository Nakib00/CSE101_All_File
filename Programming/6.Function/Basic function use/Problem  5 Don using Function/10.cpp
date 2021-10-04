/* Take the number of turms n from user and disolay the flowing sris 1+2+4+7+11+..+n turms=? */

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
   
  int i,sum=0, k=1;
  
  for(i=0; i<x; i++){
      
      k=k+i;
      cout<<k;
      
      sum=sum+k;
      
      if(i+1==x){
          
          cout<<" =";
      }
      else 
        cout<<" + ";
  }
  
   cout<<sum;
}
   