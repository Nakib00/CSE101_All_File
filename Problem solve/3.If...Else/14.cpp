/* Take a charater from user and display what kind of charater it is */

#include <iostream>
using namespace std;

int main (){
char c;
          cout<<"Enter anything=";
          cin>>c;

if (c >= '0'  &&  c <= '9')
    {
           cout<<"Digit";
    }
else if (c >= 'a' && c <= 'z')
    {
         cout<<"Small Letter";
    }
else if (c >= 'A' && c <= 'Z')
    {
          cout<<"Uppercase Letter";
   }
else
    {
           cout<<"Symbol";

    }
return 0;
}
