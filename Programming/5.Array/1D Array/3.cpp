/* Take two integer from the user. Fill an integer array of sizw 25 with random values
between the two numbers given by user.print the array.
Also try this problem with characters instead of integers */

#include <iostream>
using namespace std;

int
main ()
{
  int num[25], n,m, i;

  cout << "How many number you want [N]:";
  cin >> n;
  cout << "How many number you want [M]:";
  cin >> m;

// i contains number within the rang [m,n]

  for (i = n; i < m; i++){

      cout << "Enter number [" << i << "] :";
      cin >> num[i];
      
    }
   for(i=0; i<m; i++){
       
       cout<<" "<<num[i];
    }
    
  return 0;
}
