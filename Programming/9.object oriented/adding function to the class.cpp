//object oriented programming c++ adding function to the class

#include <iostream>
using namespace std;

class student{     // tamplate is class (name){ public:  };
    
    public :
        int id;
        double gpa;
        
        void dispay(){      //define the function
            
             cout<<id<<"  "<<gpa;  // print 
        }  
};


int main()
{
    
    student Nakib,Rakib;    // tamplate (name of class) and object  
    
    Nakib.id = 2022142;     //use . 
    
    Nakib.gpa = 3.44;
    
    Nakib.dispay();    //call the function 
    
    cout<<endl;
    
    Rakib.id = 1925625;
    
    Rakib.gpa = 3.83;
    
    Rakib.dispay();    //call the function
    
    return 0;
}
