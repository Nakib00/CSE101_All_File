#include <iostream>

using namespace std;

int main()
{
// Variable declaration
    float radius, pi, circumfarance, area, volume; 

// geting values from the user or input
    pi = 3.142;
    cout << "Enter the radius of your circle: ";
    cin >> radius;
    
//manipulation of variables and numbers
   circumfarance = 2*pi*radius;
   area = pi*radius*radius;
   volume = (4*pi*radius*radius*radius)/3;
   
// printing results or outputs
    cout << " Circumfarance = " << circumfarance << endl;
    cout << " Area = " << area << endl;
    cout << " Volume = " << volume;

    return 0;
}
