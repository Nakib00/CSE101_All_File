/* enter integer number but when enter -1 the loop will be stop */
#include <iostream>
using namespace std;

//Function prototype
void enter_number (int);

int main()
{
    int x;
    
    enter_number (x); // call the function

    return 0;
}

//define function 
void enter_number (int x){
    
    while (x!=-1){
        
        cout<<"Enter a integer Number =";
        cin>>x;
    }
}