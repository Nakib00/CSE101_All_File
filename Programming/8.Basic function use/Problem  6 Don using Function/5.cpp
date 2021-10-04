/* compute thr sum s= 1^1+2^2+3^3+.....+10^10 */

#include <iostream>
using namespace std;

//Function prototype
int sum_seris (int, int);

int main()
{
    int x,y,sum;

    cout<<"Enter the number x :";
    cin>>x;
    cout<<"Enter the number y :";
    cin>>y;
 
    sum = sum_seris (x,y); // call the function
    
    cout<<"Sum of the scris ="<<sum;
    
    return 0;
}

//define function 
int sum_seris (int x, int y){
   
  int i,j,sum=0,s=1;
  
  for(i=x; i<y; i++){
      
      for(j=1; j<=i; j++){
          
          s=s*i;
      }
      sum=sum+s;
  }
  return sum;
  
}
   