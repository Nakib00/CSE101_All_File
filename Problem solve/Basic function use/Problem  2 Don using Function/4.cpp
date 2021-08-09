/*Write a program that takes the height of the user in meter and
converts it to f oo t. (1 inch =2.54cm, 1foot =12 */

#include <iostream>
using namespace std;
//declaring a function or function prototype

int centimeter (int); 
float inch (float);
float foot (float);

int main()
{ 
    float c,i,f;
    int hight;
    
    cout<<"Enter the Hight=";
    cin>>hight;
   
   c = centimeter (hight);
   i = inch (c);
   f= foot (i);
    
    cout<<"Showing meter to foot: "<<f;
    return 0;
}
//defining a function
int centimeter (int h){
    
    int centimeter;
    
    centimeter =100*h; 
    
    return centimeter;
    
}

float inch (float c ){
    float inch;
    inch=c/2.54;
    return inch;
}

float foot (float i){
    float foot;
    foot=i/12;
    
    return foot;
}