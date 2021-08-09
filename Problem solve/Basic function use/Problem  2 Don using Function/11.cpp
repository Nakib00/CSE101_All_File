/* Take an integer from the user and print the last
digit of that */

#include <iostream>
using namespace std;

int lest_number (int);   // function prototype

int main()
{
   int n , lest;
   
   cout<<"Enter N :";
   cin>>n;
  
   lest = lest_number (n);  // function decler 
  
   cout<<"Before "<<endl;
   cout<<n<<endl;
  
   cout<<"After "<<endl;
 
    cout<<lest;
   
    return 0;
}
//defining a function
int lest_number (int n){
    
    int l;
   
    l = n%10;
    
    return l;
}