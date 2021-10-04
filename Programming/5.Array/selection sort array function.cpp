/* selection sort arry function */
#include <iostream>
using namespace std;

int  arry_input(int[]);              // taking arry input 
void arry_print(int[] , int);         // print cintain of arry 
void selection_sort (int[] , int);    // selection sort 

int main(){

    int x[10], n;
    
    n = arry_input(x);
 
    cout<<" Befor arry "<<endl;
    
    arry_print (x , n);         // call function arry_print
    
    cout<<" After selection sort "<<endl;
    
    selection_sort (x , n);     // call selection sort
    
     arry_print (x , n);       // print selection sort
    
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

// selection sort in arry 
void selection_sort (int x[], int n){
    
    int i, j, temp, min_ind;
    
    for(j=0; j<n-1; j++){
        
        min_ind=j;
        
        for(i=j+1; i<n; i++){
            
            if(x[i] < x[min_ind]){
                
                min_ind = i;
            }
            
        }
        
        temp = x[j];
        x[j] = x[min_ind];
        x[min_ind] = temp;
    }
    
}
