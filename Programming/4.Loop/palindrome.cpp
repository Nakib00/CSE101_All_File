//Take a number from the user and check if it is symmetric(palindrome)

#include <iostream>
using namespace std;

int main()
{
    int num , rev=0 ,digit, temp ;
    
    cout<<"Enter a Number : ";
    cin>>num;
    
    temp = num;     // num =101 store in temp so temp =101
    
    while(num!=0){
        
        digit = num%10; //digit = 101%10 =1   //digit = 10%10 =0
        
        rev = (rev*10) + digit; //rev = (0*10)+ digit(1) = 1 //rev=(1*10)+0=10
        
        num = num/10; //num = 101/10 = 12 //num = 10/10 =0
    }
    
    if(temp == rev){      
        
        cout<<"symmetric (palindrome)";
    }
    else {
        
        cout<<"Not symmetric (palindrome)";
    }
    
    return 0;
}
