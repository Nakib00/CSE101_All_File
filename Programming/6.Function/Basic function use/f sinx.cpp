/* sinx */

#include <iostream>
using namespace std;

// function pototyp

float sin_x (float);
float power (float,int);
float factorial (int);

int main()
{
   int x,sinx;
    
    cout<<"Enter X :";
    cin>>x;
    
    sinx=sin_x (x);
    
    cout<<"sinx ="<<sinx;

    return 0;
}
// defining function 
float sin_x (float x){
    int i,k;
    k=-1;
    float sum=x;
    for(i=3; i<=15; i=i+2){
        
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

