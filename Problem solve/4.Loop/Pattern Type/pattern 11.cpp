/*  Pattern 11

        1 2 3 4 5 
          1 2 3 4
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
    
  for(r=n; r>=1; r--)      
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
    
    

