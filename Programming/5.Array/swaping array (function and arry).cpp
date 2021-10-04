/* swaping array (function and arry)*/
#include <iostream>
using namespace std;

int  arry_input(int[]);              // taking arry input 
void arry_print(int[],int);         // print cintain of arry 
void arry_swap(int[], int[] ,int); // swaping

int main()
{
    int x[10], y[10], n_x, n_y;
    
    n_x = arry_input(x);
    n_y = arry_input(y);
    
    cout<<" Befor swap ";
    
    cout<<"****x****"<<endl;
    arry_print(x, n_x);
    
    cout<<"****y****"<<endl;
    arry_print(y, n_y);
   
    arry_swap(x, y, n_x);
    
     cout<<" After swap ";
    
    cout<<"****x****"<<endl;
    arry_print(x, n_x);
    
    cout<<"****y****"<<endl;
    arry_print(y, n_y); 
 
 return 0;
}

int  arry_input(int x[]){
    
    int i, n;
    cout<<"How many Element :";
    cin>>n;
    for(i=0; i<n; i++){
        
        cout<<"[ "<<i<<" ] =";
        cin>>x[i];
    }
    return n;
}

void arry_print(int x[], int n){
    
    int i;
    for(i=0; i<n; i++){
        
        cout<<x[i]<<" ";
    }
    cout<<endl;
}

void arry_swap(int a[], int b[] ,int n){
    
    int temp,i;
    for(i=0; i<n; i++){
        
        temp= a[i];
        a[i]=b[i];
        b[i]=temp;
        
    }
}

