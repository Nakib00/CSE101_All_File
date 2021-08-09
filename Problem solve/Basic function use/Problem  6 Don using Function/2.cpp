/* If the user enter two numbers, print all the palindrome numbers between those two numbers */

#include <iostream>
using namespace std;

//Function prototype
void palindrome (int, int);

int main()
{
    int x,y;

    cout<<"Enter the number x :";
    cin>>x;
    cout<<"Enter the number y :";
    cin>>y;

    palindrome (x,y); // call the function
    
    return 0;
}

//define function 
void palindrome (int x,int y){
   
  int i,r,rev,pal;
  
  for(i=x; i<=y; i++){
      
      pal=i;
      rev=0;
      
      while(pal!=0){
          
          r= pal%10; 
          rev = (rev*10)+r;
          pal =pal/10;
      }
      if(rev==i){
        cout<<rev <<" ";
        }
    }
}
   