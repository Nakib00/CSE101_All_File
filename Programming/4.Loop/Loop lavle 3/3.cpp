/* write a program that will be print all the perfect numbers between two integers entered by the user */

#include <iostream>
using namespace std;

int main()
{
    int n,m,i,j,sum;
    
    cout<<"N :";
    cin>>n;
    cout<<"M :";
    cin>>m;
    
    cout<<"The perfect Number is: ";
    
// i contains number within the rang [m,n]
    for(i=n; i<=m; i++){

// chake if it's perfect
    sum=0;
   for(j=1; j<i; j++)
    {
      if(i%j==0)
      {
        sum+=j;
      }
    }
// If the current number i is Perfect number        
    
    if(sum==i)
    {
      cout<<i<<" ";
    }
  }

    return 0;
}
