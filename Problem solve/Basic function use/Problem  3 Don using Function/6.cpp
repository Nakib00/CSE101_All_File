/* chack number geter then 50 and less then 100 divisible by 13 or 9 */

#include <iostream>
using namespace std;

void chack_divisible_by_13_or_9_and_geter_50_and_less_100 (int);   // function prototype

int main()
{
   int n ;
   
   cout<<"Enter any number :";
   cin>>n;

  
   chack_divisible_by_13_or_9_and_geter_50_and_less_100 (n);  // function decler 
   
    return 0;
}
//defining a function
void chack_divisible_by_13_or_9_and_geter_50_and_less_100 (int n){
    
    if((50<n) && (100>n) && (n%13==0) || (n%9==0)){
        
        cout<<n<<" yes";
    }
    else 
    cout<<n<<" No";
}