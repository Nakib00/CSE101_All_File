/* Write a program that takes the number of hours as input and displays
the equivalent number of week, days, and hours. 
For example, if the user inputs 4000 hours, 
the program displays 23 week, 5 days and 16 hours.*/

 #include <iostream>
 using namespace std;

int main () {
int nh,w,d,h;
        cout << "Enter the Hours=";
        cin>>nh;

w=nh/ (24*7);
nh=nh-(24*7*w);
d=nh/24;
h=nh-(24*d);
    
         cout<<"Week:"<<w<<endl;
         cout<<"Day:"<<d<<endl;
         cout<<"Hours"<<h;
return 0;
}
