/* cosx */

#include <iostream>
using namespace std;

// function pototyp

float cos_x (float);
float power (float,int);
float factorial (int);

int main()
{
   int x,cosx;
    
    cout<<"Enter X :";
    cin>>x;
    
    cosx=cos_x (x);
    
    cout<<"cosx ="<<cosx;

    return 0;
}
// defining function 
float cos_x (float x){
    int i,k;
    k=-1;
    float sum=1;
    for(i=2; i<=20; i=i+2){
        
        sum=sum+ k * power (x,i)/factorial (i);
        k=k*-1;
    }
    return sum;
}
float power (float x ,int y){
    
    int i;
    float m=1;
    for(i=1; i<=y; i++){
        m=m*x;
    }
    
    return m;
}
float factorial (int y){
    
    int i;
    float m=1;
    for(i=1; i<=y; i++){
        m=m*i;
    }
    return m;
}

