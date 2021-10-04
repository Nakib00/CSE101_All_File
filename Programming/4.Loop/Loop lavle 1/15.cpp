#include <iostream>
using namespace std;

int main () {
int i,x;
float sum, average;
    x = 1;
   sum = 0;
       
      for ( i=0;  i<10;  i=i +1 ){        /* when enter 10 number than loop was stop*/
        cout<<"Enter an integer Number =";
        cin>>x;
        
        sum = sum + x;
     }
        average=sum / (i-1);
        
        cout<<"The Average is ="<<average;
return 0;    
}
