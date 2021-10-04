/* Take a number from user and chack if it is a armstorng number */

#include <iostream>
using namespace std;

//Function prototype
void armstorng_number (int);

int main()
{
    int x;

    cout<<"Enter the number x :";
    cin>>x;

    armstorng_number (x); // call the function
    
    return 0;
}

//define function 
void armstorng_number (int x){
   
  int i,r,sum=0,temp;
  temp=x;
   
    while (x>0){
      
      r=x%10;
      x=x/10; 
      sum=sum+(r*r*r); 
   }
   
   if(temp==sum)
    cout<<"Armstrong Number.";
   else
    cout<<"Not Armstrong Number.";

}
   