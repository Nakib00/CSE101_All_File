/* Take Three number from user and chack the number is divisible by 3 and 5  */


#include <iostream>

using namespace std;

int main () {
int num;
      cout<<"Enter any Number=";
      cin>>num;

if ((num%3==0) && (num%5==0) ) {     /* Note: if number is 10  (10%3==0) && (10%5==0) */

      cout<<"Divisible by 3 or 5";
} 
else 
     cout<<num<<" Not divisible by 3 or 5";

    return 0;
}
