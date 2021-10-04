//scope resolution operator

/* when you want to print Global varible than use this operator */
/*
#include <iostream>
using namespace std;

int x = 10; //Global varible

int main()
{
    int x = 20;
    
    cout<< :: x; // usr :: scope resolution operator

    return 0;
}

*/

/* But whan you want to change Global varible in main function than write this type */

#include <iostream>
using namespace std;

int x = 10; //Global varible

int main()
{
    int x = 20;
    
    :: x = 30;  // this argumant change the Global varible 
    
    cout<< :: x; // usr :: scope resolution operator

    return 0;
}
