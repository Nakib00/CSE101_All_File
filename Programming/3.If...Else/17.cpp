/* Take three langth of tringle and display that tringle right or rong */

#include <iostream>
using namespace std;

int main ()
{
    float x,y,z;

       cout<<"Enter 1. Number=";
       cin>>x;
       cout<<"Enter 2. Number=";
       cin>>y;
       cout<<"Enter 3. Number=";
       cin>>z;

if ((x>y) && (x>z)) {      /* Note: Find out which one is big number, than calculat x^2==y*y+z*z */                                                               
if (x*x==y*y+z*z) {
         cout<<"Right Triangle";
    }
else {
          cout<<"Not a Right Triangle";
    }
}
else if(y>z) {
if (y*y==x*x+z*z) {
         cout<<"Right Triangle";
    }
else {
          cout<<"Not a Right Triangle";
    }
}
else {
if (z*z==x*x+y*y) {
         cout<<"Right Triangle";
    }
else {
          cout<<"Not a Right Triangle";
    }
}
    return 0;
  }


