/* chack number rang (10,40) divisible by 5 or rang (60,90) divisible by 7 */

#include <iostream>
using namespace std;

void chack_rang_divisible (int);   // function prototype

int main()
{
   int n ;
   
   cout<<"Enter any number :";
   cin>>n;

  
   chack_rang_divisible (n);  // function decler 
   
    return 0;
}
//defining a function
void chack_rang_divisible (int n){
    
    if((n>10) && (n<40) && (n%5==0) || (n>60) && (n<90) && (n%7==0) ){
        
        cout<<n<<" yes";
    }
    else 
    cout<<n<<" No";
}