/* Write a program that display following number sequence.
Make sure there is no extra comma. 0,1,2,3,….99 */

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
   
   int i;
   
   for(i=x; i<y; i++){
       
       cout<<i<<" , ";
   }
   
   cout<<i;
}