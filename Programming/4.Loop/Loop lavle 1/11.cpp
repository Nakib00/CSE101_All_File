/* Write a program that display the following series and computes its sum.
Display all the trams and sum .Make sure there is no extra plus sing at the end 2+4+8+..+1024 */


#include <iostream>
using namespace std;

int main () {
int i, sum;
   
    sum = 0;
       
      for( i=2; i<1024; i=i * 2 ){   /* when user enter 0 and Nagative than stop loop */
        
        cout<<i<< " + "; 
        sum = sum + i;
     }
        cout<<i;
        
        cout<<"  = "<<sum;
return 0;    
}
