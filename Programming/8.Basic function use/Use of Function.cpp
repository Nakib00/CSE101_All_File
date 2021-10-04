/* uae of function */

#include <iostream>
using namespace std;

// declaring a function or function prototype

    float average_number (int , int);

 int main() {
    int x,y;
    float average;

    cout<<"Enter X :";
    cin>>x;
    cout<<"Enter Y :";
    cin>>y;

// step 1.chek declaring part 2.go defining function and calculat

    average =average_number(x , y);

    cout<<"The Average Number :"<<average;

    return 0;
}

//defining a function

float average_number (int x , int y ){  // x and y value come hre
float ave;

    ave = 1.0*(x+y)/2;

    return ave;
}

