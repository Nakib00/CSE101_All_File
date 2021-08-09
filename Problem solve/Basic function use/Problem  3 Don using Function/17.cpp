/* find  Triangle */

#include <iostream>
using namespace std;

void chack_Triangle (float,float,float);   // function prototype

int main()
{
   float x,y,z;
    cout<<"Enter 1. Number=";
    cin>>x;
    cout<<"Enter 2. Number=";
    cin>>y;
    cout<<"Enter 3. Number=";
    cin>>z;

  
   chack_Triangle (x,y,z);  // function decler 
   
    return 0;
}
//defining a function
void chack_Triangle  (float x, float y,float z){
    
    if ((x>y) && (x>z)) {
    if (x*x==y*y+z*z) {
    cout<<"Right Triangle";
    }
    else {
        cout<<"Not a Right Triangle";
    }
    } 
    else if(y>z) { if (y*y==x*x+z*z) {
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
}