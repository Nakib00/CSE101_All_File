/* Find the sum of the squares of the first 100 odd number */

#include <iostream>
using namespace std;

int main()
{
    int sqr, sum=0, i;

    for(i = 1; i < 200; i = i + 2){
        sqr = i * i;
        sum = sum + sqr;
    }

    cout <<"Sum of the square of first 100 odd number is: " << sum;

    return 0;
}
