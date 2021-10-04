#include <iostream>
using namespace std;

// declaring a function or function prototype

    float power (float ,int);
    int factorial (int);
    float exponential(float);
    
int main(){
    
    float x,ex;
    
    cout<<"Enter x:";
    cin>>x;
    
// declaring part 

    ex = exponential(x);
    
    cout<<"e^"<<x<<" = "<<ex;
    
    return 0;
}   

//defining a function
// exponential calculate
float exponential(float x){    // cin 'x' = this 'x'
    
    int i;
    float sum;
    sum=1;
    for(i=1; i<=5; i++){
        
        sum= sum+ power (x ,i)/factorial (i);
    }
    return sum;
}
// power calculate
float power (float x ,int y){     // x = x  i = y
    
    int i;
    float m;
    m=1;
    
    for(i=1; i<=y; i++){
        m=m*x;
    }
    return m;        // power
}
// factorial calculate
int factorial (int y){   // i = y
    
    int i,m;
    m=1;
    for(i=1; i<=y; i++){
        m=m*i;
    }
    return m;             //factorial
}
