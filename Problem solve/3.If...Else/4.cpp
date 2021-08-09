/* Take Three number from user and chack the number is divisible by 7 or 5  */


#include <iostream>
using namespace std;

int main () {
int num;

     cout<<"Enter any Number=";
     cin>>num;

if ((num%7==0) || (num%5==0)) {       /* Note: if number is 10  (10%7==0) || (10%5==0) */
     cout<<"Divisible by 7 or 5";
} 
else 
     cout<<"Not divisible by 7 or 5";      

    return 0;
}
