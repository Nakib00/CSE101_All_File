#include <iostream>
#include <cmath>
using namespace std;

int main() {

    float a, b, c, x1, x2, d, r, i;
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;
    
    d = b*b - 4*a*c;                 //b^2 - 4ac
    
    if (d > 0) {                      //Roots are real and different
        x1 = (-b + sqrt(d)) / (2*a);
        x2 = (-b - sqrt(d)) / (2*a);
        
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    
    else if (d == 0) {            //Roots are real and same
 
        x1 = (-b + sqrt(d)) / (2*a);
        
        cout << "x1 = x2 =" << x1 << endl;
    }

    else {
        r = -b/(2*a);             //Roots are complex and different
        i =sqrt(-d)/(2*a);

        cout << "x1 = " << r << "+" << i << endl;
        cout << "x2 = " << r << "-" << i << endl;
    }

    return 0;
}