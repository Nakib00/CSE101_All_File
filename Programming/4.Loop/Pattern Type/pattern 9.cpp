/*  Pattern 9

        1 
      2 1 
    3 2 1  
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
    
    
return 0;
}
    
    

