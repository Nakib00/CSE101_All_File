/* If the user enter two numbers, print all the palindrome numbers between those two numbers */

#include <iostream>
using namespace std;

int main()
{
  int m,n,i,r,rev,pal;


  cout<< "Enter [N]:";
  cin>>n;
  cout<< "Enter [M]:";
  cin>>m;

  cout<<"The palindnome numbers : ";
   
  for(i=n; i<=m; i++){

      pal=i;   //Take a copy of i to use
      rev=0;

      while(pal!=0){   //Using the copy of i
          
          r= pal%10;
          rev = (rev*10)+r;  // revers the numbers
          pal =pal/10;
      }
      
      if(rev==i){
      cout<<rev <<" ";
      }

  }
  return 0;
}