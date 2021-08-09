/*write a program the will take the length and width 
of a rectangle from the user and prints the area perimeter of the rectangle.*/

#include <iostream>
using namespace std;

int main () {
float length,width,perimater;

    cout<<"Enter the Length=";
    cin >>length;
    cout<<"Enter the Width=";
    cin >>width;

perimater = length*width;
    cout<<"Area of the perimater is: "<<perimater;
return 0;
}
