/* All 1D array function */

#include <iostream>
#include <cstdlib>                    // random number library
using namespace std;

int array_random_input(int[]);         // random input 

int  array_input(int[]);               // taking array input 

void array_print(int[] , int);         // print cintain of array 

void array_swap (int [], int [], int); // ayyar swap 

void selection_sort (int [], int);    // selection sort

void bubble_sort (int [] , int);     // bubble sort

void array_coppy (int [] , int [] , int); //coppy array

void max_array (int[], int);        // find max array

void min_array (int[], int);        // find min array

int array_frequency (int[] , int); // frequncy array 

int array_search (int [] , int, int); // array search

int sum_array (int[] , int);    // array sum

float avareg_array (int , int);  // avareg array

void array_equal (int[], int[], int);  // array equal 

void print_array_backwaed (int x[], int n);  // print array backwaed

float Find_median(int [] , int ); // midean of digit

int   digits(int[], int); // array digit 

int main(){

    int x[10], y[10], n, m , value, search , sum;
    
    float avareg;
    
    n = arry_random_input (x);
  //  m = array_random_input (y);
  
    cout<<" Befor array "<<endl;
    
    cout<<"******X******"<<endl;
    
    array_print (x , n);         // call function array_print 
    
    
    sum = sum_array (x , n);   // call sum array function
    
    cout<<" sum of the array : "<<sum<<endl;
    
    avareg = avareg_array (sum , n);
    
    cout<<" avareg of the array : "<<avareg<<endl;
    
/*    cout<<"******Y******"<<endl;
  
    array_print (y , n);
    
   arry_swap (x , y, n);      // call function array_swap
    
   cout<<" After swap "<<endl;
    
    cout<<"******X******"<<endl;
    
    array_print (x , n);
    
    cout<<"******Y******"<<endl;
     
    array_print (y , n);  
    
    cout<<" After selection sort "<<endl;
    
    selection_sort (x , n);    // call selection sort 
    
    array_print (x , n);
    
    cout<<" After Bubble sort "<<endl;
    
    bubble_sort (x ,n);        // call bubble sort 
    
    array_print (x , n);  
    
    cout<<" coppy array "<<endl;
    
    array_coppy (x , y , n); // call coppy array 
    
    array_print (x , n);
    
    array_print (y , n); */
    
    cout<<" Maximam  "<<endl; 
    
    min_array (x , n);      // call mix array
    
    arry_print (x , n);
    
    cout<<" Minimum  "<<endl; 
    
    max_array (x , n);     // call min array
    
    arry_print (x , n);
    
    array_search (x , n);  // call search array

    
   median = Find_median(x , n);  // call median
    
    cout<<" median  : "<<median;


    l = digits(c, x);   // call digit array 


 return 0;
}

    // Input array 
   int  arry_random_input (int x[]){
    
    int i, n;
    cout<<"How many Element :";
    cin>>n;
    
    for(i=0; i<n; i++){
        
        x[i] = rand()%10; 
    }

// print array 
void array_print(int x[], int n){
    
    int i;
    for(i=0; i<n; i++){
        
        cout<<x[i]<<" ";
    }
    cout<<endl;
}

// array swap 
void array_swap (int a[], int b[], int n ){
    
    int i, tamp;
    
    for(i=0; i<n; i++){
        
        tamp=a[i];
        a[i]=b[i];
        b[i]=tamp;
    }
}

// selection sort
void selection_sort (int x [], int n){
    
    int i, j, temp, min_ind;
    
    for(j=0; j<n-1; j++){
        
        min_ind =j;
        
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
    
// bubble sort 
void bubble_sort (int x[] , int n){
    
    int i , j , temp ;
    
    for(j=0; j<n-1; j++){
        
        for(i=j+1; i<n; i++){
            
            if( x [i] > x [i+1] ){
            
            temp = x[i];
            x[i] = x[i+1];
            x[i+1] = temp;
            
            }
        }
    }
}

// array coppy function 
void array_coppy (int x[], int y[] ,int n){
    
    int i, j, temp;
    
    for(j=0; j<n-1; j++){
        
        for(i=0; i<n; i++){
            
            temp = x[i];
            x[i] = y[i];
            y[i] = temp;
        }
    }
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

// find min array
void min_array(int x[], int n){
    
    int i,min_int;
    min_int = 0;
    
    for(i=1; i<n; i++){
        
        if(x[i] < x[min_int])
        min_int = i;
    }
}

// array search
void array_search (int x[] , n){
    
    int i ,num;
    
    Cout<<" Enter the number to search : ";
    cin>>num;
    
    for(i=0; i<n; i++){
        
        if(x[i] == num){
            
            cout<<" x ["<<i<<"] = "<<num;
        }
    }
 }

// array sum 
int sum_array ( int x[] , int n){
    
    int i,sum=0;
    
    for(i=0; i<n; i++){
        
        sum = sum+ x[i];
    }
    
    return sum;
}

// array avareg 
float avareg_array (int sum ,  int n){
    
    float ave; 
    
    ave = sum/n;
    
    return ave;
}

// count array frequency
int array_frequency (int x[] , int ){
    
    int i, num ,freq;
    
    cout<<"Enter number to chack frequency: ";
    cin>>num;
    
    freq=0;
    
    for(i=0; i<n; i++){
        
        if(x[i]==num){
            
            freq = freq + 1;
        }
    }
    return freq;
}

// print array backward
void print_array_backwaed (int x[], int n){
    
    int i;
    for(i=n-1; i>=0; i--){
        
        cout<<x[i]<<" ";
    }
    cout<<endl;
}

// chack two array equal or not
void array_equal (int x[], int y[], int n){
    
    int i;
    
    for(i=0; i<n; i++){
        
        if(x[i] == y[i]){
            
            cout<<" Equal ";
        }
        elsr 
          cout<<" Not Equal";
    }
}

// find medin
float Find_median(int x[] , int n)
{
    float median=0;
    
    if(n%2 == 0){
        median = (x[(n-1)/2] +x[n/2])/2.0;
    }
    else
    {
        median = x[n/2];
    }
    
    return median;
}

// digit array 
 int digits(int a[], int x){    // call array digit
    int i;
    for ( i = 0; x > 0; i = i + 1){
        a[i] = x % 10;
        x = x / 10; 
    }
    return (i + 1);
    }

    
