/*  Pattern 10

        1 
      2 2 
    3 3 3  
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
          cout<<r;       
      }
      cout<<endl;
  }
    
    
return 0;
}
    
    

