/* chack number divisible by 5 or 7 */

#include <iostream>
using namespace std;

void chack_divisible_by_5_7 (int);   // function prototype

int main()
{
   int n ;
   
   cout<<"Enter any number :";
   cin>>n;

  
   chack_divisible_by_5_7 (n);  // function decler 
   
    return 0;
}
//defining a function
void chack_divisible_by_5_7 (int n){
    
    if((n%7==0) || (n%5==0)){
        
        cout<<n<<" Divisible by 7 or 5";
    }
    else 
    cout<<n<<" Not Divisible by 7 or 5";
}