/* Take data from user and print right equation */

#include <iostream>
using namespace std;

int main () {
int option;
float radius, length, width, pi=3.142, hight, base,edge, area_circil,
      area_rectangle,area_tringle,area_cylinder,volun_sphere,volum_cube;

      cout<<"1. Area of a circle"<<endl;
      cout<<"2. Area of a rectangle"<<endl;
      cout<<"3. Area of a triangle"<<endl;
      cout<<"4. Volume of a cylinder"<<endl;
      cout<<"5. Volume of a sphere"<<endl;
      cout<<"6. Volume of a cube"<<endl<<endl;
      cout<<"Select an option (1-6): ";
      cin>>option;

if(option==1) {
      
      cout<<" << Area of a Circle >> "<<endl<<endl;
      cout<<"Enter the Radius= ";
      cin>>radius;

area_circil=pi*radius*radius;
      
      cout<<"Area of the Circle= "<<area_circil;
}
else if (option==2){
       
       cout<<"<<Area of a rectangle>> "<<endl<<endl;
       cout<<"Enter the Length = ";
       cin>>length;
       cout<<"Enter the Width = ";
       cin>>width;

area_rectangle=length*width;
        
        cout<<"Area of a rectangle= "<<area_rectangle;
}
else if (option==3) {
       
       cout<<"<<Area of a triangle>>"<<endl<<endl;
       cout<<"Enter the Base=";
       cin>>base;
       cout<<"Enter the Hight=";
       cin>>hight;

area_tringle=.05*base*hight;
        
        cout<<"Area of a triangle= "<<area_tringle;
}
else if(option==4) {
        
        cout<<"<<Volume of a cylinder>>"<<endl<<endl;
        cout<<"Enter the Radius=";
        cin>>radius;
        cout<<"Enter the Hight=";
        cin>>hight;

area_cylinder=radius*radius*pi*hight;
        
        cout<<"Volume of a cylinder= "<<area_cylinder;
} 
else if(option==5) {
        
        cout<<"<<Volume of a sphere>>"<<endl<<endl;
        cout<<"Enter the Radius=";
        cin>>radius;

volun_sphere= (4/3) *radius*radius*radius*pi;
         
         cout<<"Volume of a sphere= "<<volun_sphere;
}
else if(option==6) {
         
         cout<<"<<Volume of a cube>>"<<endl<<endl;
         cout<<"Enter the Edge=";
         cin>>edge;

volum_cube=edge*edge*edge;
        
         cout<<"Volume of a cube= "<<volum_cube;
}
    return 0;
}


