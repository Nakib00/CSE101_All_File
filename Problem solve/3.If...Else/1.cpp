/* Take a number from user if it's "Odd Not divisible by 2" or "it's Even divisible by 2" */

#include<iostream>
using namespace std;

int main () {
int num;

    cout<<"Enter a number=";
    cin>>num;

if(num%2==0) {
    cout<<"Number is Even";
} 
else 
    cout<<"Number is Odd";

return 0;
}
