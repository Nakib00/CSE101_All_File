/*  
3 2 1 
2 1 
1

*/
#include <iostream>
using namespace std;

int main () {
int n,m,i,j; 
    
    cout<<"Enter N :";
    cin>>n;
    
  for(i=n; i>=1; i--)      // i=3 3>=1 , 2>=1 , 1>=1 
  {
      for(j=i; j>=1; j--)  // j=3 ,2 ,1
      {
          cout<<j<<" ";      /* 
                             3 2 1 
                             2 1
                             1
                                */
      }
      cout<<endl;
  }
    
    
return 0;
}