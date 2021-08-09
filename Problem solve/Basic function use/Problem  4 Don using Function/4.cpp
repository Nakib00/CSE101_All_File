/* Write a program that display following number sequence.
Make sure there is no extra comma.2,2.25,2.50,2.75..4 */

#include <iostream>
using namespace std;

//Function prototype
void enter_number (int,int);

int main()
{
    int x,y;
    cout<<"Enter start number :";
    cin>>x;
    cout<<"Enter lest number :";
    cin>>y;
    
    enter_number (x,y); // call the function

    return 0;
}

//define function 
void enter_number (int x, int y){
   
   float i;
   
   for(i=x; i<y; i+=0.25){
       
       cout<<i<<" , ";
   }
   
   cout<<i;
}