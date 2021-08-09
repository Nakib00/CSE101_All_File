/* Take number from user and display it's divisore */

#include <iostream>
using namespace std;

int main()
{
  int i, n;
  
  cout<<"Enter a Number :";
  cin>>n;
  
  for(i=1; i<n; i=i+1)
  {
      if(n % i == 0)   /* find what is divisore if n=12 than 12%1=0 12/2=0 than it's cout i */
      {
          cout<<i<<" , ";
      }
  }
  cout<<i;
   return 0;
}
