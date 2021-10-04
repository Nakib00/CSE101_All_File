/* Take a number from user and chack it's "Integer or Floating-point" */

#include <iostream>
using namespace std;

int main ()
{
    int x;
    float y,z;
       cout<<"Enter a Number=";
       cin>>y;
   
    x=y;
    z=x-y;               /* Note: y=10.5   x=10   z=10.5-10 = 0.5  if  z==.0 */
    
if (z==.0) {

        cout<<"This Number is Integer";
  } 
    else {
        cout<<"This number is Floating-point";
  }

    return 0;
  }

