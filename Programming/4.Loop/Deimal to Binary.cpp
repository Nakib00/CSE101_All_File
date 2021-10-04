//Deimal to Binary
#include <iostream>
using namespace std;

int main()
{
    int num , i=1 ,bin=0;
    
    cout<<"Enter Deimal Number :";
    cin>>num;
  
   cout<<"Deimal: "<<num;
 
 while(num!=0){
     
     bin = bin + (num%2) * i;
     num = num/2;
     i=i*10;
 }
 
 cout<<" & Binary: "<<bin; 
 
    return 0;
}
