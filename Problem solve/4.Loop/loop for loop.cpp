#include <iostream>
using namespace std;

int main()
{
   int m,n,i,j;
   
   cout<<"Enter Who many line you want :";
   cin>>m;
   cout<<"Enter Who many * you want :";
   cin>>n;
   
   for(j=0; j<m; j=j+1)
   {
       for(i=0; i<n; i=i+1)
       {
           cout<<"*";
       }
       
       cout<<endl;   // * jula ka new line a anar jano 
   }
    
    
    
    return 0;
}