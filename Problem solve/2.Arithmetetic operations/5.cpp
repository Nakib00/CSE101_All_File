/* Write a program that takes a temperature input in Fahrenheit 
and displays the temperature in Celsius and in Kelvin. 
Use the conversion formulae 5(F-32) =9C and C=K-273.15.*/

#include <iostream>
using namespace std;

int main () {
float fahrenheit,Celsius,Kelvin;

     cout<<"Enter the fahrenheit=";
     cin >>fahrenheit;

Celsius=0.55*fahrenheit-17.77;
Kelvin=Celsius+273.15;

      cout<<"Celsius= "<<Celsius <<endl;
      cout<<"Kelvin= "<<Kelvin;

    return 0;
}
