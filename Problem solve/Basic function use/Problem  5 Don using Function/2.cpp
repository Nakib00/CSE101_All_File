/* Take the value of x and y from user and calculat x^y with out using prower function.
x can be decimal number and y must be positive integer  */

#include <iostream>
using namespace std;

//Function prototype
float power_count (float,int);

int main()
{
    int y;
    float x,power;
    
    cout<<"Enter the number x :";
    cin>>x;
    cout<<"Enter the number y :";
    cin>>y;

    power = power_count (x,y); // call the function
    
    cout<<power;

    return 0;
}

//define function 
float power_count (float x, int y){
   
  int i;
  float sum=1;
  
  for(i=1; i<=y; i++){
      
      sum=sum*x;
  }
  
  return sum;
}
   