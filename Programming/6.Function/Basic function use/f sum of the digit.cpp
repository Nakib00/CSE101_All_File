/* sum of the digit */
#include <iostream>
using namespace std;
// function pototyp
int sum_of_the_digit (int, int);

int main()
{
    int n,m,sum;
    cout<<"N :";
    cin>>n;
    cout<<"M :";
    cin>>m;
    
    sum= sum_of_the_digit (n, m);
    cout<<"Sum of the digit :"<<sum;

    return 0;
}
// defining function 
int sum_of_the_digit (int x, int y){
    int i,s;
    s=0;
    for(i=x; i<=y; i++){
        
        s=s+i;
    }
    
    return s;
}