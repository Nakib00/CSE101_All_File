/* Which Number is biger in 3 Number? */

#include <iostream>
using namespace std;

void chack_biger_number (int, int, int);   // function prototype

int main()
{
   int a,b,c ;
   
   cout<<"Enter A :";
   cin>>a;
   cout<<"Enter B :";
   cin>>b;
   cout<<"Enter C :";
   cin>>c;
  
   chack_biger_number (a,b,c);  // function decler 
   
    return 0;
}
//defining a function
void chack_biger_number (int a, int b, int c){
    
    if((a>b) && (a>c)){
        
        cout<<a<<" is Biger number";
    }
    else if((b>a) && (b>c)){
        
        cout<<b<<" is Biger number";
    }
    else if((c>a) && (c>b)){
        
        cout<<c<<" is Biger number";
    }
}