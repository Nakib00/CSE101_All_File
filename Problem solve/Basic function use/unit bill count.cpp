#include <iostream>

using namespace std;

// Funtion(s) pototypes.
int unit100(int);
int unit200(int);
int unit300(int);
int unitabove300(int);

int main()
{
    
    // Declaration of variable.
    int x, bills;
    
    // Taking input into variables.
    cout << "Enter total units consumed: ";
    cin >> x;

    // Processing
    if (x > 300){
        bills = unitabove300(x);
    }else if (x > 200){
        bills = unit300(x);
    }else if (x > 100){
        bills = unit200(x);
    }else if ( x > 0){
        bills = unit100(x);
    }
    
    // Printing results.
    cout << "Bill amount is: " << bills;

    return 0;
}

// Definied funtion(s)
int unit100(int x){
    return x*5;
}

int unit200(int x){
    return unit100(100) + (x-100)*8;
}

int unit300(int x){
    return unit200(200) + (x-200)*10;
}

int unitabove300(int x){
    return unit300(300) + (x-300)*15;
}



