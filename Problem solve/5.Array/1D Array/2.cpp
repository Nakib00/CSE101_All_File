/* fill an arrau of 100 integers with random numbers.
Than find the largest,smalleat and the average value */

#include <iostream>
using namespace std;

int
main ()
{
  int num[100], n, mex, i, min;
  float sum = 0,average;

  cout << "How many number you want :";
  cin >> n;

// i contains number within the rang [m,n]

  for (i = 0; i < n; i++)
    {

      cout << "Enter number [" << i << "] :";
      cin >> num[i];

      sum = sum + num[i];
    }

// chack average number    
  average = sum / n;

// chack min number 
  min = num[0];

// chack mex number
  mex = num[0];

  for (i = 1; i < n; i++)
    {

      if (mex < num[i])
	{

	  mex = num[i];
	}
      if (min > num[i])
	{

	  min = num[i];
	}
    }

  cout << "largest number :" << mex << endl;
  cout << "smalleat number :" << min << endl;
  cout << "Averaage number :" << average;

  return 0;
}
