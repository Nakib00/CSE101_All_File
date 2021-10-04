/* fill an array of integers (any size) with user input 
  and print the array forwards and backwards */

#include <iostream>
using namespace std;

int
main ()
{
  int num[100], n, i;

  cout << "How many number you want :";
  cin >> n;

// i contains number within the rang [m,n]

  for (i = 0; i < n; i++){

      cout << "Enter number [" << i << "] :";
      cin >> num[i];
      
    }
// array forwards    
   for(i=0; i<n; i++){
       
       cout<<" "<<num[i];
    }
    
    cout<<endl;
    
// array backwards    
   for(i=n-1; i>=0; i--){
      
      cout<<" "<<num[i];
    }
  return 0;
}
