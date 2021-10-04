/* compute thr sum s= 1!+2!+3!+.....+10! */

#include <iostream>
using namespace std;

int main()
{
    int i, j, sum=0, m, n, s;


    cout << "Enter N : ";
    cin>>n;
    cout<<"Enter M :";
    cin>>m;
    
// i contains number within the rang [m,n]    
    for(i = n; i < m; i++){

        s = 1;
        
        for(j = 1; j <= i; j++){
            
            s = s * i;    // calclute 1!          
        }
        
        sum = sum + s;     // calclute 1!+2!      
        cout << i <<"!"<< " + ";    
    }
    
// avoid last '+' sign    
    s = 1;
    for(j = 1; j <= i; j++){
            s = s * i;          
    }
    sum = sum + s;
    cout << i <<"!";


    cout << " = " << sum;

    return 0;
}
