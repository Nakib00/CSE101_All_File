#include <iostream>
using namespace std;

  int  tex10(int);
  int  tex15(int);
  int  tex20(int);
  int  tex30(int);

int main(){
    
    int x , t;
    
    cout<<"Welcome to the tax rate calculator program.";
    
    cout<<"Enter annual salary in BDT (total):";
    cin>>x;
    
    if(x <= 250000){
        
        t = 0;
    }
    else if((x > 250000) && (x <= 500000)){
        
        t = 0 + tex10( x - 250000);
    }
    else if ((x > 500000)&&(x <= 1000000)){
        
        t = 0 + tex10(250000) + tex15(x - 500000);
    }
    else if ((x > 1000000)&&(x <= 1500000)){
        
        t = 0 + tex10(250000) + tex15(500000) + tex20(x - 1000000);
    }
    else{
        
        t = 0 + tex10(250000) + tex15(500000) + tex20(1500000) + tex30(x - 1500000);
    }
    
    cout<<"Total payable tax amount is: " <<t << " BDT";
    
    return 0;
}      

int tex10(int x){
    
    int result;
    
    result = x * (0.1);
    
    return result;
}
int tex15(int x){
    
    int result;
    
    result = x * (0.15);
    
    return result;
}
int tex20(int x){
    
    int result;
    
    result = x * (0.2);
    
    return result;
}
int tex30(int x){
    
    int result;
    
    result = x * (0.3);
    
    return result;
}