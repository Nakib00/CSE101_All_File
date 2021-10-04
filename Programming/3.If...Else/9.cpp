/* Take number from user and check the gread system */

#include <iostream>
using namespace std;

int main () {
int num;
     cout<<"Enter any Number=";
     cin>>num;

if ((num<=100) && (num>=85)){
     cout<<"A";
}
if ((num<85) && (num>=80)){
     cout<<"A-";
}
if ((num<80) && (num>=75)){
     cout<<"B+";
}
if ((num<75) && (num>=70)){
     cout<<"B";
}
if ((num<70) && (num>=65)){
     cout<<"B-";
}
if ((num<65) && (num>=60)){
     cout<<"C+";
}
if ((num<60) && (num>=55)){
     cout<<"C";
}
if ((num<55) && (num>=50)){
     cout<<"C-";
}
if ((num<50) && (num>=45)){
     cout<<"D+";
}
if ((num<45) && (num>=40)){
     cout<<"D";
}
if ((num<40) && (num>=0)){
     cout<<"F";
}
return 0;
}





