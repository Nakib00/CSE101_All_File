#include <iostream>
using namespace std;

void char_array_intialize (char [] , int);  // inatialize char  array 

int char_array_input (char []); 

void char_array_print (char[]  , int);      // print string

int concat_string (char [] ,char [], int, char [] , int); // add two char array to one char array


 int main(){
    
    char ch[100], chu[100], w[200];
    
    int lanth ,n= 50 , t; 
    
    char_array_intialize (ch , 100);   // call inatialize
    
    char_array_intialize (chu , 100);   // call inatialize

     lanth = char_array_input(ch);      // call input    lanth = array size 
     
     lanth = char_array_input(chu);      // call input    lanth = array size 
     
    char_array_print (ch  , lanth);  // call string print
    
    cout<<endl;
    
    char_array_print (chu  , lanth);  // call string print
    
     t =  concat_string (ch  ,chu, lanth, w  , n);
    
    cout<<endl;
    
    cout<<t;
  
        return 0;
}
     
    // char array intialize
void char_array_intialize(char x[] , int n){
    
    int i;
    
    for(i=0; i<n; i++){
        
        x[i] = '\0';
    }
    
}

// char array input
int char_array_input (char c[]){
    
    int i;
    
    cout<<"Enter your Name :";
    cin>>c;
    
    i=0;
    
    while (c[i] != '\0'){
        
        i=i+1;
    }
    
    return i;
}

// print string array
void char_array_print (char x[]  , int n){
    
    int i;
    
    for(i=0; i<n; i++){
        
        cout<<x[i];
    }
}


int concat_string (char x[] ,char y[], int l, char w[] , int n){
    
    int i ,j ,k;
    
    for(i = 0; i < l; i++){
        w[i] = x[i];
    }
    
    k = 0;      //this is to access elements of y
    
     for(j = i; j < (l + n); j++){ 
        
         w[j] = y[k];
        k = k + 1;
    }

   
    return j;
}  
