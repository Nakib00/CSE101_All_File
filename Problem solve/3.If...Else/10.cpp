/* Take Age from user and check the human life stsge  */

#include <iostream>
using namespace std;

int main () {
int num;
      cout<<"Enter your age=";
      cin>>num;
if (num<3) {
       cout<<"Infancy";
}
if ((num>=3) && (num<12)) {
       cout<<"Childhood";
}
if ((num>=12) && (num<20)) {
        cout<<"Adolescence";
}
if ((num>=20) && (num<40)) {
        cout<<"Young adulthood";
}
if ((num>=40) && (num<65)) {
        cout<<"Mature adulthood";
}
if (num>=65) {
       cout<<"Late adulthood";
}
return 0;
}
