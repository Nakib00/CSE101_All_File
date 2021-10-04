/* Take a number from user and chack if it is a perfect number */

#include<iostream>
using namespace std;
int main ()
{  
    int i, num, x, sum=0;
    
    cout << "Enter the number : ";
    cin >> num;
    
    for (i=1; i < num; i=i+1)
    {
        x = num % i;
        if (x == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == num)
        cout<< num <<" perfect.";
    else
        cout<< num <<"  not perfect.";
    return 0;
}