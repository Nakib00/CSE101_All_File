/* chack number rang [35,75) divisible by 5 and not 2 */

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
    
    if((n>=35) && (n<75) && (n%5==0) && (n%2!=0)){
        
        cout<<n<<" yes";
    }
    else 
    cout<<n<<" No";
}