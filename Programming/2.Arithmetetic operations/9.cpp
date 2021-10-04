/* Write a program that swaps the values without using a 3rd variable.*/

#include <iostream>
using namespace std;

int main (){                                                                                                                
int x,y;                                                                                
     cout<<"x=";                                                                     
     cin>>x;                                                                         
     cout<<"y=";
     cin>>y;                                                                          
x=x+y;            /*If x=5,y=6 x=5+6=11 y=11-6=5 x=11-5=6   */
y=x-y;
x=x-y;
     cout<<"x="<<x<<endl;
     cout<<"y="<<y<<endl;
return 0;
}
