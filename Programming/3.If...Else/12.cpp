/* Take three number from user and display out largest and smallest  */

#include <iostream>
using namespace std;

int main () {
float num1, num2, num3;
       cout<<"Enter a Number 1 ="; cin>>num1;
       cout<<"Enter a Number 2 ="; cin>>num2;
       cout<<"Enter a Number 3 ="; cin>>num3;

if((num1<num2) && (num1<num3)) {
       cout<<num1<<" is the smallest Number"<<endl;
}
else if (num2<num3) {
        cout<<num2<<" is the smallest Number"<<endl;
} else{
        cout <<num3<<" is the smallest Number"<<endl;
}
if ((num1>num2) && (num1>num3)) {
        cout<<num1<<" is the largest Number"<<endl;
} 
else if(num2>num3) {
       cout<<num2<<" is the largest Number"<<endl;
} 
else {
       cout<<num3<<" is the largest Number"<<endl;
}
    return 0;
}



