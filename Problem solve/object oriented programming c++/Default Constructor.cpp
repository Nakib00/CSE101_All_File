//object oriented programming c++ Default Constructor

#include <iostream>
using namespace std;

class student{     // tamplate is class (name){ public:  };
    
    public :
        int id;
        double gpa;
        
        void dispay(){      //define the function for print 
            
             cout<<id<<"  "<<gpa;  // print 
        }  
        
        student(int x , double y){        //Constructor function name must be same to class name
            
            id = x;
            gpa = y;
            
        }
        
        student(){
            
            cout<<"Default Constructor"<<endl;
        }
};


int main()
{
    
    student DF;
    
    student Nakib(2022142 , 3.44);    // tamplate (name of class) and object  
    
    Nakib.dispay();     //call the print function 
    
    cout<<endl;
    
    student Rakib(1910566 , 3.83);   // call function for input data
    
    Rakib.dispay();    //call the print function
    
    return 0;
}
