/* Write a program that swaps (exchanges) the values of two varibles.*/

#include <iostream>
using namespace std;

int main (){                                                                                             
int x = 5, 
y = 10, swaps;                                                                   

swaps = x;
x = y;
y = swaps;

   cout<<"x="<<x <<endl;
   cout<<"y="<<y<<endl;

return 0;
}
