/* Take the number of turms n from user and disolay the flowing sris 1+2+4+7+11+..+n turms=? */

#include<iostream>
using namespace std;

int main()
{
    int n, i, x=1, sum=0;
    
    cout<<"Enter a Number :";  
    cin>>n;
    
  for(i=0; i<n; i=i+1)  /* i=0 karon 0 thaka start korlam and x=1  */
  {
      
    x=x + i;    /* sum korar por x print detace x=1+0 =1 */
    cout<<x;                                 // x=1+1 =2 // x=2+2 =4 // x=4+3 =7
    
    sum=sum+x;   /* x ka sum kora hoca */
    
    if(i+1==n)  /* i ar man jokon n ar shoman hoba thokon = print hoba */
    {
        cout<<" = ";
    }
    else
    {
        cout<<" + ";
    }
  }
    
    cout<<sum;
  
  return 0;
}