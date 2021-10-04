/* Take a number from user and calculat it's factoriul  */

#include <iostream>
using namespace std;

//Function prototype
int factoriul_count (int);

int main()
{
    int n,factoriul;
    
    cout<<"Enter the number :";
    cin>>n;

    factoriul = factoriul_count (n); // call the function
    
    cout<<" n! = "<<factoriul;

    return 0;
}

//define function 
int factoriul_count (int n){
   
  int i, sum=1;
  
  for(i=1; i<=n; i++){
      
      sum=sum*i;
  }
  
  return sum;
}
   