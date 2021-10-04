/* write a program that takes 10 number from user and display ther average  */

#include <iostream>
using namespace std;

//Function prototype
void enter_number (int);

int main()
{
    int n;
    cout<<"How many Number average you want :";
    cin>>n;

    enter_number (n); // call the function

    return 0;
}

//define function 
void enter_number (int n){
   
   int x,i,sum=0;
   float ave;
   
   for(i=0; i<n; i++){
   
   cout<<"Enter an integer Number ["<<i<<"] =";
   cin>>x;
   
   sum+=x;
  
   }
   
   ave = sum / (i-1);
   
   cout<<"The Average is ="<<ave;
}
   