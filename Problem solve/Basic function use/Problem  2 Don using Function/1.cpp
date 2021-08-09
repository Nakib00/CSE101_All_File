/* write a program that takes the radius of a circle from the user
and prints the area and circumference of the circle */

#include <iostream>
using namespace std;
//declaring a function or function prototype
float area_of_circle (float);

int main()
{ 
    float r,area;    
   cout<<"Enter Radius :";
   cin>>r;
   
   area=area_of_circle (r);
    
    cout<<"The area of the circle :"<<area;
    return 0;
}
//defining a function
float area_of_circle (float r){
    
    float a,pi=3.14;
    
    a=2*pi*r;
    
    return a;
    
}