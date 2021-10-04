/* Find all the numbers between 10 and 1000 where each numbers summation of 
their digits is a prime number.For example 344 shuld be print because 3+4+4=11 which is a prime number */

#include <iostream>
using namespace std;

// declaring a function or function prototype

    int sum_of_digits (int);
    int isprime (int);

int main(){
    int i,dsum,prime;
    
// step 1.chake declaring part 2.go defining function and calculat

    for(i=10; i<=1000; i++){
        
        dsum = sum_of_digits(i);
        prime = isprime(dsum);
        
        if(prime==1)
        {
          cout<<i<<" ";  
        }
    }
    
    return 0;
}   

//defining a function
// sum the digits
int sum_of_digits (int n){  // i=n 
    
    int r,sum=0;
    
    while(n>0){
        r=n%10;
        sum=sum+r;
        n=n/10;
        
    }
    return sum;
}
//chake prime or not
int isprime (int n){   //dsum=n
    
    int i,p;
    p=1;
    
    for(i=2; i<n; i++){
        
        if(n%i==0){
            p=0;
            break;
        }
    }
    if(n==1){
        p=0;
    }
    return p;
    
}
