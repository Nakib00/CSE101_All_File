/* Use of ternary operator */

#include <iostream>
using namespace std;

int main(){
    
    int num1, num2, num3 , big;
    
    cout<<"Enter 1.Number :";
    cin>>num1; 
    cout<<"Enter 2.Number :";
    cin>>num2;
    
    big = (num1>num2) ? num1 : num2;   // big = (chake condition) ? nim1 : nim2  
    
    cout<<"The Big Number is :"<<big;
    
    return 0;
}