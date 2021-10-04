/* find age man format */

#include <iostream>
using namespace std;

void chack_age (int);   // function prototype

int main()
{
   int num ;
   
   cout<<"Enter any number :";
   cin>>num;

  
   chack_age (num);  // function decler 
   
    return 0;
}
//defining a function
void chack_age (int num){
    
    if (num<3) {
        cout<<"Infancy";
    } 
    if ((num>=3) && (num<12)) {
        cout<<"Childhood";
    } 
    if ((num>=12) && (num<20)) {
        cout<<"Adolescence";
    } 
    if ((num>=20) && (num<40)) {
        cout<<"Young adulthood";
    } 
    if ((num>=40) && (num<65)) {
        cout<<"Mature adulthood";
    } 
    if (num>=65) {
        cout<<"Late adulthood";
}
}