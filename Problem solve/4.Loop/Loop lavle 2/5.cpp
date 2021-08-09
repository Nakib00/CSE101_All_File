/* Take a number from user and chack it is a prime number */

#include <iostream>
using namespace std;
int
main ()
{
  int n, i, isprime;
  isprime = 1;        /* dore isprime=1 hoca prime */

  cout << "Enter a Number :";
  cin >> n;

  for (i = 2; i < n; i = i + 1)
    {
      if (n % i == 0)     /* check kora hoca bag jaikina jodi jai tahola isprime=0 hoba  */
	{
	  isprime = 0;     /* isprime=0 hoca ata not prime */
	  break;
	}

    }
  if (isprime == 1)
    {
      cout << n << " prime";
    }
  else
    cout << n << " not prime";

  return 0;
}
