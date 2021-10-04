/* Write a program that converts that number of days 
into month and years. For example, if the user inputs 813 days, 
the program prints: 2 years 2 month 23 days. 
(don’t worry about leap year and you can calculate using 
1 month =30days) */

#include <iostream>
using namespace std;
int main (){
int ndays, y, m, d;
      cout<<"Input of days=";
      cin >>ndays;

y =   ndays/365;                                          
ndays = ndays-(365*y);
m = ndays/30;
d = ndays-(30*m);

       cout<<"year= "<<y <<endl;
       cout<<"Month= "<<m<<endl;
       cout<<"Day="<<d;
return 0;
}
