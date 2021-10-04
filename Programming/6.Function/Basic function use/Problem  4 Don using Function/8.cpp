/* Take two integers from user and display all the ODD between them */

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
   
   for(i=x; i<y-1; i++){
       
       if(i%2!=0){
           
           cout<<i<<" , ";
       }
       
   }
   for(i=y-1; i<=y; i++){
       
       if(i%2!=0){
           
           cout<<i;
       }
   }
   
}