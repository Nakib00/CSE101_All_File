/* Take a number from user and chack it's "postive or Nagative" */

#include <iostream>
using namespace std;

int main(){

int num;
     cout<<"Enter a number=";
     cin>>num;
if (num>0){

     cout<<"The number is positive";
}
else if(num<0){

    cout<<"The number is Negative";
}
else if (num==0)

    cout<<"Neither Positive or Nsgative";

return 0;
}

