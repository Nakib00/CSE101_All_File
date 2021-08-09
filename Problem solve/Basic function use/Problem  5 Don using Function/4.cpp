/* Take two integer number from user and print the lowest common factor (LCF) */

#include <iostream>
using namespace std;

//Function prototype
void LCF_count (int,int);

int main()
{
    int y,x,swap;

    cout<<"Enter the number x :";
    cin>>x;
    cout<<"Enter the number y :";
    cin>>y;
    
    if(x>y){
        
        swap=x;
        x=y;
        y=swap;
    }

    LCF_count(x,y); // call the function
    
    return 0;
}

//define function 
void LCF_count (int x, int y){
   
  int i;
 
  for(i=y; i<=x*y; i++){
      
      if((i%x==0) && (i%y==0)){
          
          cout<<"LCF ( "<<x<<", "<<y<<" )="<<i<<endl;
          break;
      }
  }
 
}
   