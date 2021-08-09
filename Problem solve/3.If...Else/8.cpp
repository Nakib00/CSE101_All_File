/* Take number from user and chack with range (10,40) and divisible by 5 or 
with rang (90,60) and divisible by 7 */


#include <iostream>
using namespace std;

int main (){
int num;
     cout<<"Enter any Number=";
     cin>>num;

if (((num>10) && (num<40) && (num%5==0)) || ((num>60) && (num<90) && (num%7==0)))
{
      cout<<"yes";
} 
  else {
      cout<<"no";
}   
    return 0;
}




