/* find qudarnt */

#include <iostream>
using namespace std;

void chack_qudarnt (float,float);   // function prototype

int main()
{
   float x,y;
    cout<<"Enter X=";
    cin>>x;
    cout<<"Enter Y=";
    cin>>y;

  
   chack_qudarnt (x,y);  // function decler 
   
    return 0;
}
//defining a function
void chack_qudarnt  (float x, float y){
    
    if (x > 0 && y > 0) {
    cout<<"1st quandrant";
    }
    else if (x < 0 && y > 0) {
        cout<<"2nd quandrant";
    } 
    else if (x < 0 && y < 0) {
        cout<<"3rd quandrant";
    } 
    else if (x > 0 && y < 0) {
        cout<<"4th quandrant";
    } 
    else if (x==0 && y==0) {
    cout<<"Origin";
    }
    else if (x==0) {
    cout<<"Y-axis";
    }
    else if (y==0) {
    cout<<"X-axis";
    }
}