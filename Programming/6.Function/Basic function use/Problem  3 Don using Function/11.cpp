/* number display on word */

#include <iostream>
using namespace std;

void chack_word (int);   // function prototype

int main()
{
   int num ;
   
   cout<<"Enter any number :";
   cin>>num;

  
   chack_word  (num);  // function decler 
   
    return 0;
}
//defining a function
void chack_word  (int num){
    
    if (((num>=0) && (num<=10)) && (num==0)) {
        cout<<"Zero";
    } 
    if(num==1){
        cout<<"One";
    } 
    if (num==2){
        cout<<"Two";
    } 
    if (num==3) {
    cout<<"Three";
    } 
    if (num==4) {
    cout<<"Four";
    } 
    if (num==5) {
    cout<<"Five";
    } 
    if (num==6) {
    cout<<"Six";
    }
    if (num==7) {
    cout<<"Seven";
    } 
    if (num==8) {
    cout<<"Eight";
    }
    if(num==9) {
    cout<<"Nine";
    } 
    if (num== 10) {
    cout<<"Ten";
    }
}