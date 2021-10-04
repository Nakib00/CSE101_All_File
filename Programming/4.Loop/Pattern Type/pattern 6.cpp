/*  Pattern 6

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
    
  for(r=n; r>=1; r--)      // r=3 3>=1 , 2>=1 , 1>=1 
  {
      for(c=1; c<=r; c++)  // c=1 c<=3 , c<=2 , c<=1
      {
          cout<<c;        /* 
                             1 2 3 
                             1 2
                             1
                                */
      }
      cout<<endl;
  }
    
    
return 0;
}
    
    

