#include <iostream>
using namespace std;

  void input (int *); 
  int  lcm (int * , int *);
  
int main(){
    
    int x , y , z , result;
    
    input(&x);
    input(&y);
    input(&z);
    
    result = lcm(&x , &y);
    
    result = lcm(&z , &result);
    
    cout<<"LCM of "<< x<< " , "<< y <<" and "<< z<<" is "<<result;
    
    return 0;
}
void input (int *p){
    
    cout<<"Enter an integer: ";
    cin>> *p;
}
int lcm (int *x , int *y){
    int i;
    
    for(i= *y; i<= (*x) * (*y); i++){
        
       if((i%(*x)==0) && (i%(*y)==0)){
           
         break;
       }
       
    }
    
    return i;
}
