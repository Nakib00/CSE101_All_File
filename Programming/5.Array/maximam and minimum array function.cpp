/* maximam and minimum arry function */
#include <iostream>
using namespace std;

int  arry_input(int[]);              // taking arry input 
void arry_print(int[],int);         // print cintain of arry 
void max_array (int[], int);        // find max arry
void min_array (int[], int);        // find min arry

int main()
{
    int x[10], n;
    
    n = arry_input(x);

    cout<<" Befor arry "<<endl;
    
    arry_print (x , n);         // call function arry_print
    
    max_array (x , n);
    
    min_array (x , n);
    
    cout<<" Maximam  "<<endl; 
    
    min_array (x , n);      // call mix arry
    
    arry_print (x , n);
    
    cout<<" Minimum  "<<endl; 
    
    max_array (x , n);     // call min arry
    
    arry_print (x , n);


return 0;
}

// Input arry 
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

// print arry 
void arry_print(int x[], int n){
    
    int i;
    for(i=0; i<n; i++){
        
        cout<<x[i]<<" ";
    }
    cout<<endl;
}

// find max in arry 
void max_array (int x[], int n){
    
    int i,max_int;
    max_int = 0;
    
    for(i=1; i<n; i++){
        
        if(x[i] > x[max_int])
        max_int = i;
    }
}

// find min arry
void min_array(int x[], int n){
    
    int i,min_int;
    min_int = 0;
    
    for(i=1; i<n; i++){
        
        if(x[i] < x[min_int])
        min_int = i;
    }
}
