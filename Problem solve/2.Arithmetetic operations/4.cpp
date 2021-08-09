/* Write a program that takes the height of the user in meter and converts 
it to foot. (1 inch =2.54cm, 1foot =12 inch).*/

#include <iostream>
using namespace std;

int main (){
float hight,centimeter,inch,foot;

    cout<<"Enter the Hight=";
    cin >>hight;

centimeter=100*hight;
inch=centimeter/2.54;
foot=inch/12;

    cout<<"Showing meter to foot: "<<foot;

return 0;
}
