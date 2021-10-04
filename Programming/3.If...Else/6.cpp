/* Take a number from user that geter than 50 and lase then 100 and divisible by 13 or 9  */


#include <iostream>

using namespace std;

int main () {
int num;

      cout<<"Enter any Number=";
      cin>>num;

if (((num>50) && (num<100)) && ((num%13==0) || (num%9==0))) {   
      cout<<"Divisible by 13 or 9";                                                                      
}                            /* Note: if number is 10  (10>50) && (10<100)&& (10%13==0) || (10%9==0) */
else                                                                                                  
      cout<<num<<" Not divisible by 13 or 9";

    return 0;
}
