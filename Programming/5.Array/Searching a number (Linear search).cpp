/* Searching a number (Linear search) */

#include <iostream>
using namespace std;

int main(){
    
    int num[]={10,20,2,54,8,9,7,5,3,30,4};
    int value, pos=-1,i;
    
    cout<<"Enter the value you want to scarch :";
    cin>>value;
    
    for(i=0; i<11; i++){
        
        if(value==num[i])
        {
            pos=i+1;
            break;
        }
    }
    if(pos==-1)
    {
        cout<<"scarch value was not found";
    }
    else 
        cout<<"scarch value found in "<<pos<<" position";
    return 0;
}