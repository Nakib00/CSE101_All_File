//object oriented programming c++ adding parametrized function to the class

#include <iostream>
using namespace std;

class student{     // tamplate is class (name){ public:  };
    
    public :
        int id;
        double gpa;
        
        void dispay(){      //define the function for print 
            
             cout<<id<<"  "<<gpa;  // print 
        }  
        
        void setvalue(int x , double y){
            
            id = x;
            gpa = y;
            
        }
};


int main()
{
    
    student Nakib,Rakib;    // tamplate (name of class) and object  
    
    Nakib.setvalue(2022142 , 3.44);   // call function for input data
    

    Nakib.dispay();     //call the print function 
    
    cout<<endl;
    
    Rakib.setvalue(1910566 , 3.83);   // call function for input data
    
    Rakib.dispay();    //call the print function
    
    return 0;
}
