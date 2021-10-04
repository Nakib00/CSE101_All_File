/* write a program the will take the length and width of a rectangle from
the user and prints the area perimeter of the rectangle. */

#include <iostream>
using namespace std;
//declaring a function or function prototype

int perimate (int, int); 

int main()
{ 
    int l,w,p;    
   cout<<"Enter length :";
   cin>>l;
   cout<<"Enter width :";
   cin>>w;
   
   p = perimate (l , w );
    
    cout<<"Area of the perimater is: "<<p;
    return 0;
}
//defining a function
int perimate (int x, int y){
    
    int p;
    
    p=x*y;
    
    return p;
    
}