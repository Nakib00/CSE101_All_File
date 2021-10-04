/* Take one integer from user and display all the * between them */

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
     
        cout<<" * ";
   }

   
}