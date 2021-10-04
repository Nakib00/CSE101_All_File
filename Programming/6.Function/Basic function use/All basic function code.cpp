/* This is a code of all basic function exponential , power ,
factorial , isprime , fibonachhi , sinx , cosx , 
isperfect , sum of digits , GCD, LCM */

#include <iosteram>
using namespace std;

// function prototype

float exponential(float); // e^x

float power (float ,int); // x^1 

int factorial (int);      // 5!

int LCM (int, int);       // Least common multiple

int GCD (int, int);      // Greatest common divisor

float sin_x (float); 

float cos_x (float);

int sum_of_the_digit (int);

void isprime_number (int); 

void perfect_number (int);

int main()
{
    // call function
    
    int x;
    
    cout<<"Enter X :";
    cin>>x;
    

    return 0;
}

// decler function

float exponential(float x){
    
    int i;
    float sum;
    sum=1;
    
    for(i=1; i<=5; i++){
    sum= sum+ power (x ,i)/factorial (i);
    }
    
    return sum;
    }

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
    float m;
    m=1;
    for(i=1; i<=y; i++){
        
        m=m*x;
    } 
    return m;
}

float factorial (int y){
    
    int i,m;
    m=1; 
    for(i=1; i<=y; i++){
       
        m=m*i;
    } 
    return m;
}

int sum_of_the_digit (int x ){
    
    int r, sum=0;
    
    while(x>0){ 
        r=x%10; 
        sum=sum+r;
        x=x/10;
    }
  return sum;
}

void isprime_number (int n){
   
   int i, prime= 0;
   
   for (i = 1; i <= n; i++)
   {
      if ((n % i) == 0)
      {
        prime++;
      }
   }

   if (prime == 2)
      cout << n << " is a prime number.";
   else
      cout << n << " is not a prime number.";
}


void perfect_number (int x){
    
    int i,sum=0;
  
  for(i=1; i<x; i++){
      
      if(x%i==0){
          
          sum=sum+i;
      }
  }
  
  if (sum == x)
    cout<< x <<" perfect.";
  else
    cout<< x <<" not perfect.";
 
}

int LCM (int x, int y){
    
     int i;
    
    for(i=y; i<=x*y; i++){
        
       if((i%x==0) && (i%y==0)){
           
         break;
       }
       
    }
    
    return i;
}

int GCD (int x, int y){
    
    int i , g;
    
    for(i=1; i<= x && i<= y; i++){
        
        if (num1 % i == 0 && num2 % i == 0){
            
            g = i;
        }
    }
    
    return g;
}

