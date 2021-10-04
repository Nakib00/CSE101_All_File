/* Write a program that keeps number (integer) until that user enters -1. (use while or do- while loop) */

#include <iostream>
using namespace std;

int main () {
int x;    
       
      while(x != -1 ){   /* when user enter -1 than stop loop */
        cout<<"Enter a integer Number =";
        cin>>x;
      }
    
return 0;    
}

/* using For loop */

#include <iostream>
using namespace std;

int main () {
int i, x; 
   x=1;   
       
      for( i=0; x != -1; i=i+1 ){   /* when user enter -1 than stop loop */
        cout<<"Enter a integer Number =";
       cin>>x;
      }
    
return 0;    
}