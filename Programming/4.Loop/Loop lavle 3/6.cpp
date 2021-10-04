/* compute thr sum s= 1^0+2^-1+3^-2+.....+10^-9 */

#include <iostream>
using namespace std;

int main()
{
    float i, j, sum=0, m, n,s;
    
    cout << "Sum of the following series: "<< endl;

    //Generate number
    for(i = 1; i < 10; i++){

        s = 1;
        //Power calculation
        //Run the loop for i times to calculate (i^i(-1))
        //(j <= i - 1) because power is (i - 1). same as (< i)
        
        for(j = 1; j <= i - 1; j++){
            s = s * i;                  //calculate i^i
        }
        n = 1 / s;                     //calculate i^(-i)
        sum = sum + n;              //calculate the sum after the value of (i^(-i)) has been generated

        //Display the series
        // If is to avoid printing (^-0)
        //Else print (^-(i-1))
        
        if (i - 1 == 0){
            cout << i <<"^"<< i - 1 << " + ";
        }
        else{
        
        cout << i <<"^-"<< i - 1 << " + ";    //Display the series
        }
    }

    //This is to avoid last '+' sign
    s = 1;
    for(j = 1; j <= i-1; j++){
        s = s * i;                   //calculate i^i
    }
    n = 1 / s;                      //calculate i^(-i)
    sum = sum + n;                 //calculate the sum after the value of (i^(-i)) has been generated
    cout << i <<"^-"<< i - 1 ;


    cout << " = " << sum;

    return 0;
}

