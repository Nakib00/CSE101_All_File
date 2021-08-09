/* isprime */

#include <iostream>
using namespace std;

void isprime_number (int);   // function prototype

int main()
{
   int n,prime;
   
   cout<<"Enter N :";
   cin>>n;
   
   isprime_number (n);  // function decler 
   
    return 0;
}
//defining a function
void isprime_number (int n){
   
   int i, prime= 0;
   
   for (i = 1; i <= n; i++)
   {
      if ((n % i) == 0)
      {
        prime++;
      }
   }

   if (prime == 2)
      cout << n << " is a prime number.";
   else
      cout << n << " is not a prime number.";
}

