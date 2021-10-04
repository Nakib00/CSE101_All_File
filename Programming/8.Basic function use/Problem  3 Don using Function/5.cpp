/* chack number divisible by 5 and 3 */

#include <iostream>
using namespace std;

void chack_divisible_by_5_3 (int);   // function prototype

int main()
{
   int n ;
   
   cout<<"Enter any number :";
   cin>>n;

  
   chack_divisible_by_5_3 (n);  // function decler 
   
    return 0;
}
//defining a function
void chack_divisible_by_5_3 (int n){
    
    if((n%3==0) && (n%5==0)){
        
        cout<<n<<" Divisible by 3 or 5";
    }
    else 
    cout<<n<<" Not Divisible by 3 or 5";
}