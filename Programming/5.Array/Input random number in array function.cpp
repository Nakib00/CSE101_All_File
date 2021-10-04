/* Input random number in arry function */
#include <iostream>
#include <cstdlib>
using namespace std;

int arrt_random_input(int[]);       // random input 
int  arry_input(int[]);              // taking arry input 
void arry_print(int[] , int);         // print cintain of arry 
void bubble_sort (int[] , int);    // bubble sort 

int main(){

    int x[10], n;
    
    n = arrt_random_input(x);
 
    cout<<" Befor arry "<<endl;
    
    arry_print (x , n);         // call function arry_print
  
    
 return 0;
}

// Input arry 
int  arrt_random_input(int x[]){
    
    int i, n;
    cout<<"How many Element :";
    cin>>n;
    
    for(i=0; i<n; i++){
        
        x[i] = rand()%100; 
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


