/* Take a number from user n and display the following fibonacci sequence like 0 1 1 2 3 5 8 13 21 */

#include <iostream>
using namespace std;
int
main ()
{
  int n, i, f1, f2, f3;
  f1 = 0;
  f2 = 1;

  cout << "Enter a Number :";
  cin >> n;

  cout<<f1<<"  "<<f2<<"  ";
  for (i = 3; i <= n; i = i + 1)
    {
      f3 = f1 + f2;		/* f3=0+1 =1 */

      cout << f3 << "  ";

      f1 = f2;			/* f1=1 here f2 is convat f1 */
      f2 = f3;			/* f2=1 here f3 is convat f2 */

    }
    
  return 0;
}
