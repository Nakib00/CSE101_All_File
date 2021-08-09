/* All 2D array function */

#include <iostream>
#include <cstdlib>                    // random number library
using namespace std;

void array_random_input(int [20][20], int, int);     // random input 

int  array_input(int [20][20] , int , int);          // taking array input 

void array_print(int [20][20] , int , int);         // print cintain of array 

void array_print_1d(int[], int);   // print 1D array for sum r and sum c

int max_2D_array (int [20][20] , int , int);       // Maximum 

int min_2D_array (int [20][20] , int , int);       // Minimum
 
int frequency_2D (int [20] [20] , int , int );    // Frequency

int sum_all_valu_2D (int [20][20], int , int);   // sum all valu

int sum_diagonal_valu_2D (int[20][20], int , int); // Diagonal 

void add2D (int [20][20], int [20][20], int [20][20], int , int); //add2D

void subtract2D (int [20][20] , int [20][20] , int [20][20] , int , int); // subtract

void transpose (int[20][20], int [20][20], int , int);   // Transpose

void sum_of_row (int[20][20], int, int, int[]);  // sum of the row

void sum_of_clom (int[20][20], int, int, int[]);  // sum of the clom

void search_by_index2D (int[20][20], int , int , int[]); //search by index 2D


int main(){
    
    int x [20][20] , y[20][20] , z[20][20] , n , m , max , min, frequency, 
        sum_array , sum_of_diagonal , subtract , index[2] ,k [20] , sum_c, sum_r, search_by_index2D;
    
    cout<<"How many row (20) :";
    cin>>m;
    cout<<"How many cloam (20) :";
    cin>>n;
    
   // array_input (x , m , n);    // call input array function
    
    array_random_input(x , m , n);  // call random input array 
    
    array_print (x , m , n);   // call print array function
    
    max = max_2D_array(x , m , n); // call Maximum array function
    
    cout<<"Maximum array :"<<max<<endl;
    
    min = min_2D_array(x , m , n);  // call Minimum array function
    
    cout<<"Minimum array :"<<min<<endl;
    
    frequency = frequency_2D (x , n , m );  // call frequency array function
    
    cout<<"frequency :"<<frequency<<endl;
    
    sum_array = sum_all_valu_2D (x, n , m);  // call sum array function
    
    cout<<"Sum of all valu :"<<sum_array<<endl;
    
    sum_of_diagonal = sum_diagonal_valu_2D (x , n , m); // call Diagonal
    
    cout<<"The diagonal sum :"<<sum_of_diagonal;
    
    
// need 2 array and sum 2 array valu and store in the z array     
    add2D (x , y ,z , n , m);        //call add2D 
    
    subtract2D (x , y , z, n ,m);     //call subtract
    
    
    transpose (x, y, n , m);   // call transpose
    
    
    sum_r (x, n , m, k);  // sum of row
    
    cout << "R: " << endl;
    
    
    array_print_1d(k, m);  // print sum of row
    
    sum_c (x, n , m, k);  // sum of clom
    
    cout << "C: " << endl;
    
    
    array_print_1d(k, n);  // print sum if clom
    
    
    search_by_index2D (x, r, c, index )  // call search index

    
    return 0;
}

// input array 
void array_random_input (int x [20][20] , int r , int c){
    
    int i,j,temp;
    
    for(i=0; i<r; i++){
        
        for(j=0; j<c; j++){
            
            temp = rand ();      // cout<<"["<<i<<"]"<<"["<<j<<"]";
            x[i][j] = temp%10;   // cin>>a[i][j];
        }
    }
}

// print array_random_input
void array_print (int x[20][20] ,int r ,int c){
    
    int i,j;
    
    for(i=0; i<r; i++){
        
        for(j=0; j<c; j++){
            
            cout<<x[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

// max_2D_array
int max_2D_array (int x [20][20] , int r, int c){
    
    int i , j , maximum;
    
    maximum = x[0][0];
    
    for(i=0; i<r; i++){
        
        for(j=0; j<c; j++){
            
            if(x[i][j] > maximum){
                
                maximum = x[i][j];
            }
        }
    }
    return maximum;
}

// min_2D_array
int min_2D_array (int x [20][20] , int r, int c){
    
    int i , j , Minimum;
    
    Minimum = x[0][0];
    
    for(i=0; i<r; i++){
        
        for(j=0; j<c; j++){
            
            if(x[i][j] < Minimum){
                
                Minimum = x[i][j];
            }
        }
    }
    return Minimum;
}

// frequency coutnt
int frequency_2D (int x[20][20] , int r, int c ){
    
    int i ,j , k , fequ=0;
    
    cout<<"Which number you want to chack :";
    cin>>k;
    
    for(i=0; i<r; i++){
        
        for(j=0; j<c; j++){
            
            if(x[i][j] == k){
                
                fequ = fequ + 1;
            }
        }
    }
    return fequ;
}

// sum of the valu
int sum_all_valu_2D (int x[20][20] , int r, int c ){
    
    int i ,j , sum = 0 ;
    
    for(i=0; i<r; i++){
        
        for(j=0; j<c; j++){
            
                sum = sum + x[i][j];
        }
    }
    return sum;
}

// sum diagonal valu 2D
int sum_diagonal_valu_2D (int x[20][20] , int r, int c){
    
    int i ,j , sum_diagonal;
    
    for(i=0; i<r; i++){
        
        for(j=0; j<c; j++){     
            
            if(i == j){         // not diagonal if(i!=j)
                
                sum_diagonal= sum_diagonal + x[i][j];
            }
        }
    }
    
    return sum_diagonal;
}

//add2D
void add2D (int x[20][20] ,int y [20][20] ,int z [20][20] , r , c){
    
    int i, j;
    
    for(i=0; i<r; i++){
        
        for(j=0; j<c; j++){
            
            z [i][j] = x [i][j] + j [i][j];
        }
    }
    
}

//subtract2D
void subtract2D (int x[20][20] ,int y [20][20] ,int z [20][20] , r , c){
    
    int i, j;
    
    for(i=0; i<r; i++){
        
        for(j=0; j<c; j++){
            
            z [i][j] = x [i][j] - j [i][j];
        }
    }
    
}

//transpose
void transpose (int x[20][20] , int y[20][20], int r , int c){
    
    int i ,j;
    
    for(i=0; i<r; i++){
        
        for(j=0; i<c; j++){
            
            y[j][i] = x[i][j];  // must change print n=m , m=n 
        }
    }
    
}

//sum of row
void sum_of_row (int x [20][20], int r, int c, int y[]){
    
    int i, j, sum=0;
   
    for(i = 0; i < c; i++){        // This loop controls column
        for (j = 0; j < r; j++){    //row
            
            sum = sum + x[j][i];
        }
    }
    y[i] = sum;
    sum=0;
    
}

//sum of clom
void sum_of_clom (int x [20][20], int r, int c, int y[]){
    
    int i ,j, sum=0 ;
    
    for(i=0; i<r; i++){
        
        for(j=0; j<c; j++){
            
            sum = sum + x[i][j];
            
        }
        y[i] = sum;
        sum = 0;
    }
}

//search by index 2D
void search_by_index2D (int x[20][20], int r, int c, int index[]){
    
    int i, j , b;
    
    cout<<"Which number you search :";
    cin>>b;
    
    index[0]=-1;
    index[1]=-1;
    
    for(i=0; i<r; i++){
        
        for(j=0; j<c; j++){
            
            if(b==x[i][j]){
                
                index[0] = i;
                index[1] = j;
                break;
            }
        }
         if(b==x[i][j]){
        
                break;
            }
    }
}


