/*  Pattern 8

1 
1 2 
1 2 3  this for 1st foe loop 

1 2 3  this for 2nd foe loop 
1 2 
1

*/

#include <iostream>
using namespace std;

int main () {
int n,m,c,r; 
    
    cout<<"Enter N :";
    cin>>n;
    
  for(r=1; r<=n; r++)      
  {
      for(c=1; c<=r; c++)  
      {
          cout<<c<<" ";       
      }
      cout<<endl;
  }
  
  
  for(r=n-1; r>=1; r--)      
  {
      for(c=1; c<=r; c++)  
      {
          cout<<c<<" ";       
      }
      cout<<endl;
  }
    
    
return 0;
}
    
    

