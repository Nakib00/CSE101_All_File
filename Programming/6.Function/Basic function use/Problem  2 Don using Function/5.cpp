/* Write a program that takes a temperature input in Fahrenheit
and displays the temperature in Celsius and in Kelvin. Use the
conversion formulae 5(F 32) =9C and C=K 273.15. */

#include <iostream>
using namespace std;
//declaring a function or function prototype

float Celsius (float);
float Kelvin (float);

int main()
{ 
    float c,k,fahrenheit;
    
    cout<<"Enter the fahrenheit=";
    cin >>fahrenheit;
   
   c = Celsius (fahrenheit);
   k = Kelvin (c);
    
    cout<<"Celsius= "<<c <<endl;
    cout<<"Kelvin= "<<k;
    return 0;
}
//defining a function
float Celsius (float f){
    float Celsius;
    Celsius=0.55*f-17.77;
    
    return Celsius;
    
}

float Kelvin (float c){
    float Kelvin;
    Kelvin=c+273.15;
    return Kelvin;
}