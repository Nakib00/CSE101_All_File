//object oriented programming c++ use class and object

#include <iostream>
using namespace std;

class student{     // tamplate is class (name){ public:  };
    
    public :
        int id;
        double gpa;
};


int main()
{
    
    student Nakib,Rakib;    // tamplate (name of class) and object  
    
    Nakib.id = 2022142;     //use . 
    
    Nakib.gpa = 3.44;
    
    cout<<Nakib.id<<"  "<<Nakib.gpa;
    
    cout<<endl;
    
    Rakib.id = 192562;
    
    Rakib.gpa = 3.83;
    
    cout<<Rakib.id<<"  "<<Rakib.gpa;
    
    return 0;
}