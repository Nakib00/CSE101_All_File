/* n=5 m=3 
  * * * * *
  * * * * *
  * * * * *
*/

#include <iostream>
using namespace std;

int main()
{
    int i,j,n,m;
    cout<<"Enter N :";
    cin>>n;
    cout<<"Enter M :";
    cin>>m;
    
    for(j=0; j<m; j++)
    {
        for(i=0; i<n; i++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}