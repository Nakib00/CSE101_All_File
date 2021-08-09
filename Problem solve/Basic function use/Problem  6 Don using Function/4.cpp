/* Find the sum of the squares of the first 100 odd number */

#include <iostream>
using namespace std;

//Function prototype
void sum_first_100_odd (int);

int main()
{
    int x,y;

    cout<<"Enter the number x :";
    cin>>x;
 
    sum_first_100_odd (x); // call the function
    
    return 0;
}

//define function 
void sum_first_100_odd (int x){
   
  int i,sqr,sum=0;
  
  for(i=1; i<=x; i++){
      
      if(x%2==0){
          sqr = i * i; 
          sum = sum + sqr;
      }
  }
  cout <<"Sum of the square of first 100 odd number is: " << sum;
  
}
   