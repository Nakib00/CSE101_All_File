/* find lipier */

#include <iostream>
using namespace std;

void chack_lipier (int);   // function prototype

int main()
{
   int num;
    cout<<"Enter Year=";
    cin>>num;

  
   chack_lipier   (num);  // function decler 
   
    return 0;
}
//defining a function
void chack_lipier  (int num){
    
    if (num%400==0) {
        cout<<"A Leap Year";
    } 
    else if ((num%4==0) && (num%100!= 0)) {
    cout<<"A Leap Year";
    } 
    else {
    cout<<"A Leap Year";
    }
}