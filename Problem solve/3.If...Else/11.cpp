/* Take number from user 0-10 and display the number word from */

#include <iostream>
using namespace std;

int main(){
int num;
       cout<<"Enter a Number (0 to 10) =";
       cin>>num;

if (((num>=0) && (num<=10)) && (num==0)) {
       cout<<"Zero";
} 
if(num==1){
       cout<<"One";
}
 if (num==2){
       cout<<"Two";
}
 if (num==3) {
       cout<<"Three";
}
 if (num==4) {
       cout<<"Four";
} 
if (num==5) {
       cout<<"Five";
}
 if (num==6) {
       cout<<"Six";
}
 if (num==7) {
       cout<<"Seven";
} 
if (num==8) {
       cout<<"Eight";
}
 if(num==9) {
      cout<<"Nine";
}
 if (num== 10) {
      cout<<"Ten";
}
    return 0;
}


