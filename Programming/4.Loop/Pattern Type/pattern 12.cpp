/*  Pattern 12

        1 
      1 2 
    1 2 3
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
      // printing space 
      for(c=1; c<=n-r; c++)  
      {
          cout<<" ";       
      }
      //printhing number
      for(c=1; c<=r; c++)  
      {
          cout<<c;       
      }
      cout<<endl;
  } 
   
   
   for(r=n-1; r>=1; r--)      
  {   
      // printing space 
      for(c=1; c<=n-r; c++)  
      {
          cout<<" ";       
      }
      //printhing number
      for(c=1; c<=r; c++)  
      {
          cout<<c;       
      }
      cout<<endl;
  }
    
    
return 0;
}
    
    

