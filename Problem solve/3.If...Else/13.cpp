/* Take year from user and check Leap  */

#include <iostream>
using namespace std;

int main () {
int num;
     cout<<"Enter Year=";
     cin>>num;

 if (num%400==0) {
     cout<<"A Leap Year";
 } 

else {
      cout<<"Not A Leap Year";
 }
    return 0;
}



