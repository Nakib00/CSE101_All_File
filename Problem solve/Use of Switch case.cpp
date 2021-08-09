/* Use of Switch case */

#include <iostream>
using namespace std;

int main(){
    
    int num;
    
    cout<<"Enter Number (0-10) :";
    cin>>num; 
    
    if (num>=0 && num<=5)
    {
        cout<<"";
    }
    else cout<<"Enter right Number";
    
    switch(num)
    {
        case 0 :
        cout<<"The Number is Zero";
        
        case 1 :
        cout<<"The Number is One";
        
        case 2 :
        cout<<"The Number is Two";
        
        case 3 :
        cout<<"The Number is Three";
        
        case 4 :
        cout<<"The Number is Fore";
        
        case 5 :
        cout<<"The Number is Five";
        
    }
    
    return 0;
}