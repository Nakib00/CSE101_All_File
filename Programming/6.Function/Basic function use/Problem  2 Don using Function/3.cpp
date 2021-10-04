/* Write a program that will take the height and base of triangle
from the user and print s the area of tringle. */

#include <iostream>
using namespace std;
//declaring a function or function prototype

float tingle (int, int); 

int main()
{ 
    float t;
    int hight, base;
    cout<<"Enter the Hight=";
    cin >>hight;
    cout<<"Enter the Base=";
    cin >>base;
   
   t = tingle (hight, base);
    
    cout<<"Area of the Tingle is: "<<t;
    return 0;
}
//defining a function
float tingle (int hight , int base) {
    
    float tingle;
    
    tingle = 0.5*hight*base;
    
    return tingle;
    
}