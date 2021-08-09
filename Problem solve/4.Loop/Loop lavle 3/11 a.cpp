/*  
1
1 2
1 2 3
*/

#include <iostream>
using namespace std;

int main () {
int n,m,c,r; 
    
    cout<<"Enter N :";
    cin>>n;
    cout<<"Enter M :";
    cin>>m;
    
    for(r=n; r<=m; r++)      // r=1 r<=3 r++, 2<=3 r++, 3<=3 r++  'r ar upor nerbor kora row koita hoba' 
    {
        for(c=n; c<=r; c++) // c=1 c<=1 c++, c=1 c<=2 c++, c=1 c<=3 c++
        {
            cout<< c;       /*1 
                              1 2 
                              1 2 3  */
        }
        
        cout<<endl;
    }
    
    
    
return 0;
}
    
    

