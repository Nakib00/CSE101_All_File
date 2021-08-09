/* Take Three number from user and chack  Which Number is biger in 3 Number? */


#include <iostream>
using namespace std;

int main () {
int a,b,c;

    cout<<"Enter any Number A=";
    cin>>a;
    cout<<"Enter any Number B=";
    cin>>b;
    cout<<"Enter any Number C=";
    cin>>c;

if ((a>b) && (a>c)) {               /* Note:  if a=10, b=20 c=30   (10>20) && (10>30) */
     cout<<"A is biger number";
}
 else if((b>a) && (b>c)) {          /* Note:  if a=10, b=20 c=30   (20>10) && (20>30) */
     cout<<"B is biger number";
}
 else if((c>a) && (c>b)) {          /* Note:  if a=10, b=20 c=30   (30>10) && (30>20) */
     cout<<"C is biger number";
} else
     cout<<"All number ar Same";
    return 0;
}
