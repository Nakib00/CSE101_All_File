/* Take a number from user n and display the following fibonacci sequence like 0 1 1 2 3 5 8 13 21 */

#include <iostream>
using namespace std;

//Function prototype
void fibonacci_number (int);

int main()
{
    int x;

    cout<<"Enter the number x :";
    cin>>x;

    fibonacci_number (x); // call the function
    
    return 0;
}

//define function 
void fibonacci_number (int x){
   
  int i,f1, f2, f3;
    f1 = 0;
    f2 = 1;
    
    cout<<f1<<" "<<f2<<" ";
    
    for(i=3; i<=x; i++){
        
        f3 = f1 + f2;
        
        cout << f3 << " ";
        
        f1=f2;
        f2=f3;
    }
}
   