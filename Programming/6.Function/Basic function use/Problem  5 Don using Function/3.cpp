/* Take two integer number from user and print the hight common factor (HCF) */

#include <iostream>
using namespace std;

//Function prototype
void HCF_count (int,int);

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

     HCF_count(x,y); // call the function
    
    return 0;
}

//define function 
void HCF_count (int x, int y){
   
  int i;
 
  for(i=x; i>0; i--){
      
      if((x%i==0) && (y%i==0)){
          
          cout<<"HCF ( "<<x<<", "<<y<<" )="<<i<<endl;
          break;
      }
  }
 
}
   