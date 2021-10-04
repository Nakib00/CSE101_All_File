/* compute thr sum s= 1^1+2^2+3^3+.....+10^10 */

#include <iostream>
using namespace std;

int main()
{
    int i, j, sum=0, m, n, s;


    cout << "Enter N : ";
    cin>>n;
    cout<<"Enter M :";
    cin>>m;
    
    //Generate number
    for(i = n; i < m; i++){

        s = 1;
        
        //Power calculation
        //Run the loop for (i+1) times to calculate (i^i)
        
        for(j = 1; j <= i; j++){
            s = s * i;             //calculate i^i
        }
        
        sum = sum + s;            //calculate the sum after the value of (i^i) has been generated
        cout << i <<"^"<< i << " + ";    //Display the series
    }

    //This is to avoid last '+' sign
    
    s = 1;
    for(j = 1; j <= i; j++){
            s = s * i;          //calculate i^i
    }
    sum = sum + s;
    cout << i <<"^"<< i ;


    cout << " = " << sum;

    return 0;
}
