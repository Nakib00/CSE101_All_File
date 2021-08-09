/* Take number from user and chack with range [35,75) and divisible by 5 or not 2 */


#include <iostream>
using namespace std;

int main(){
int num;
     cout<<"Enter a Number=";
     cin>>num;
 
if ((num>=35) && (num<75) && (num%5==0) && (num%2!=0))
 {
     cout<<"Yes";
 }else{
     cout<<"NO";
 }
    return 0;
}




