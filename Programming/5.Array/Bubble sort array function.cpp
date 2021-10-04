/* Bubble sort arry function */
#include <iostream>
using namespace std;

int  arry_input(int[]);              // taking arry input 
void arry_print(int[] , int);         // print cintain of arry 
void bubble_sort (int[] , int);    // bubble sort 

int main(){

    int x[10], n;
    
    n = arry_input(x);
 
    cout<<" Befor arry "<<endl;
    
    arry_print (x , n);         // call function arry_print
    
    cout<<" After Bubble sort "<<endl;
    
    bubble_sort (x , n);     // call bubble sort
  
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

// Bubble sort in arry 
void bubble_sort (int x[], int n){
    
    int i, j, temp;
    
    for(j=0; j<n-1; j++){
        
        for(i=j+1; i<n; i++){
            
            if(x[i] > x[i+1]){ 
                
                temp = x[i];
                x[i] = x[i+1];
                x[i+1] = temp;
            }
            
        }
    }
    
}
