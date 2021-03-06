//Pointers : relationship between pointers and normal variables  

#include <iostream>
using namespace std;

int main()
{
// declaration of variables 
    int x; // declare normal variable
    int *p, *q; // declare a pointer type variable or address type variable
    
    p = &x; // copy address of 'x' variable into pointer variable 'p'
    x = 10; // same as: *p = 10; provided that 'p = &x' is done before
    cout << "*p= "<<*p << endl; // same as: cout << x << endl; provided that 'p = &x' is done before
    cout << "x= "<< x << endl;   // same as: cout << *p << endl; provided that 'p = &x;' is done before
    
    q = p ; // copy the address stored in 'p' into q, now value of x can be accesed by both 'p' and 'q'

    cin >> *q ; // same as: 'cin >> *p;' same as: 'cin >> x;' 
    cout << "x= "<< x << endl; // same as: 'cout << *p;' same as: 'cout << *q;'

    cout << "&x "<< &x << endl;// same as: 'cout << p << endl;' or 'cout << q << endl;' // this will display the address of 'x' it is hexadecimal value
    cout << "p= "<< p << endl;// same as: 'cout << &x << endl;' or 'cout << q << endl;' // this will display contant of 'p' whihc is the address of 'x', it is hexadecimal value
    cout << "q= "<< q << endl;
    
    return 0;
}




*******************************************************************************************************************************************


#include <iostream>

using namespace std;

int main()
{
// 1. declaration of pointer variable
    int *x, *y, *temp;
// 2. allocate memory location to point to
    x = new int;
    y = new int;
    temp = new int;
// taking input using pointer variables
   cout <<"Enter First int: ";
   cin >> *x;
   cout <<"Enter Second int: ";
   cin >> *y;

// print content pointed by pointers
cout << x << " = "<< *x<< endl;
cout << y << " = "<< *y<< endl;

//swap using value
  *temp = *x;
  *x = *y;
  *y = *temp;          // change valows 
  
  cout<<endl;

// print content pointed by pointers
cout << x << " = "<< *x<< endl;
cout << y << " = "<< *y<< endl;

  
  cout<<endl;

//swap using pointer or address
  temp = x;
     x = y;               // change momary location 
     y = temp;

// print content pointed by pointers
cout << x << " = "<< *x<< endl;
cout << y << " = "<< *y<< endl;

    return 0;
}

********************************************************************************


//pointers functions 00
#include <iostream>
using namespace std;

int add(int, int);

int main()
{
    int x, y;
    
    cout << "Enter the first integer: ";
    cin >> x;
    cout << "Enter the second integer: ";
    cin >> y;
    
    cout << x << " + " << y << " = " <<add(x,y); 
      
    return 0;
}

int add(int a, int b){

    return a + b;
}


********************************************************************************


// pointer Function 01

#include <iostream>
using namespace std;

int add(int, int);

int main()
{
    int *x, *y;

    x = new int ;
    y = new int ;

    cout << "Enter the first integer: ";
    cin >> *x;
    cout << "Enter the second integer: ";
    cin >> *y;

    cout << *x << " + " << *y << " = " <<add(*x,*y);

    return 0;
}

int add(int a, int b){

    return a + b;
}



********************************************************************************


//Pointer Funciton 02
#include <iostream>
using namespace std;

int add(int *, int *);

int main()
{
    int x, y;

    cout << "Enter the first integer: ";
    cin >> x;
    cout << "Enter the second integer: ";
    cin >> y;

    cout << x << " + " << y << " = " <<add(&x,&y);

    return 0;
}

int add(int *a, int *b){

    return *a + *b;
}


********************************************************************************


// pointers functions 03

#include <iostream>
using namespace std;

int add(int *, int *);

int main()
{
    int *x, *y;

    x = new int;
    y = new int;

    cout << "Enter the first integer: ";
    cin >> *x;
    cout << "Enter the second integer: ";
    cin >> *y;

    cout << *x << " + " << *y << " = " <<add(x,y);

    return 0;
}

int add(int *a, int *b){

    return *a + *b;
}



********************************************************************************


// pointers functions 04

#include <iostream>
using namespace std;

void add(int *, int *);

int main()
{
    int *x, *y;

    x = new int;
    y = new int;

    cout << "Enter the first integer: ";
    cin >> *x;
    cout << "Enter the second integer: ";
    cin >> *y;
    cout << *x << " + " << *y << " = "; 

    add(x,y);

   cout << *x;

    return 0;
}

void add(int *a, int *b){

     *a = *a + *b;
}



********************************************************************************


// swap xy pointer functions 

#include <iostream>
using namespace std;

void swapxy(int *, int *);

int main()
{
    int x, y;
    
    cout << "Enter the first integer: ";
    cin >> x;
    cout << "Enter the second integer: ";
    cin >> y;

    cout << "Before swap"<<endl; 
    cout << "x = "<< x << "  y = "<< y<< endl;
    
    swapxy(&x,&y);

    cout << "After swap"<<endl; 
    cout << "x = "<< x << "  y = "<< y<< endl;

    return 0;
}

void swapxy(int *a, int *b){
    
    int temp;
    
    temp = *a;
    *a = *b;
    *b = temp;
    
}