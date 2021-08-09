/* write a program that aske the user how many input take, than take the specified number of 
input and count the number of positive , negative , x=zero , odd and even number. */

#include <iostream>
using namespace std;

int main()
{
   int i,x,m,p,n,z,o,e;
   p=0;
   z=0;
   n=0;
   e=0;
   o=0;

        cout<<"Number of input : ";
        cin>>m;

   for(i=0; i<m; i=i+1)
   {
       cout<<"Enter  a integer ["<<(i+1)<<"] = ";
       cin>>x;

       if (x>0) {
            p=p+1;          /* count positive Number */
        }
        else if(x<0){
            n=n+1;          /* count Negative Number */
        }
          else if (x==0)
         {
             z=z+1;         /* count Zero */
         }

        if(x%2==0) {
            e=e+1;          /* count Even */
        }
        else
            o=o+1;          /* count Odd */
   }
            cout<<" positive : "<<p<<endl;
            cout<<" Negative : "<<n<<endl;
            cout<<" Even : "<<e<<endl;
            cout<<" Zero : "<<z<<endl;
            cout<<" Odd : "<<o<<endl;
   return 0;
}
