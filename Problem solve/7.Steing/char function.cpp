/* char function */

#include <iostream>
using namespace std;

void char_array_intialize (char [] , int);  // inatialize char  array 

int char_array_input (char []);             // input char array

void char_array_print (char[]  , int);      // print string

void char_upercase (char[] , int , char[]);  // upercase of char

int count_vowel (char[] , int);             // count vowel 

int count_Digits (char[] , int);           // count Digit

int count_small_latter (char [] , int);   // count small latter

int count_symble (char [] , int);         // count symble

int ispaliandrom (char [] , int);         // paliandrom

int isSubstring (char[] , int , char [] , int);  //substring

int concat_string (char [] ,char [], int, char [] , int); // add two char array to one char array

int frequnce_string (char [] , int , char );    // chack frequnce

float isSubstring_parcentage (char [] , int , char [] , int);  //substring parcentage

void revers_string (char[] , int  , char[] );       //revers string

int steing_compare (char[] , char[] , int);        // compare two string equal lanth or not

int string_coppy (char[] , char[] , int , int);    // nwe_string_size = (new_string , old_string , left_ind_old , right_ind_old)


int main(){
    
   char ch [100] , chu[100] , vowel, t[100] ,char_coppy , fre ,add [100] ;
   
   int lanth , count_digit , count_small , symble, compar , issubstring_result, ispaliandrom_result , frequnce , l;
   
   float parcentage;
   
   char_array_intialize (ch , 100);   // call inatialize
   
   char_array_intialize (chu , 100);  // call inatialize
   
   lanth = char_array_input(ch);      // call input    lanth = array size 
   
   char_array_print (ch  , lanth);  // call string print
   
   char_upercase (ch , lanth , chu);   // call upercase
   
   cout<<"User input :"<<ch<<endl;
   cout<<"Lurge :"<<chu<<endl;
   
   
   vowel = count_vowel (ch , lanth);   // call vowel
   
   parcentage = vowel * 100.0 / (lanth - vowel);
   
   cout<<"Result :"<<parcentage<<endl;   
   
   
   count_digit = count_Digits (ch , lanth);  //call Digit count
   
   cout<<"Digit count: "<<count_digit<<endl;
   
   
   count_small = count_small_latter(ch , lanth); //call count small latter 
   
   cout<<"Small letter count :"<<count_small<<endl;
   
   
   symble = count_symble (ch , lanth);       // call symble count
   
   cout<<"That number of symble :"<<symble<<endl;
   
  
   char_coppy = string_coppy (ch, t, n , m);  // n = indx  call string_coppy
   
   
   compar = steing_compare (ch , cu , lanth);   // call compar string 
   
   if(compar == 1 ){
       
       cout<<" Two string are same ";
   }
   else {
       
       cout<<"Two string are not same";
   }
    
    
    issubstring_result = isSubstring_parcentage( ch , m , chu , n  );   // call isSubstring
    
    if(issubstring_result == 1){
        
        cout<<" substring ";
    }
    else {
        
        cout<<"Not substring";
    }
    
    
    ispaliandrom_result = (ch , lanth);    //call paliandrom
    
    if(ispaliandrom_result == 1){
        
        cout<<" paliandrom ";
    }
    else {
        
        cout<<"Not paliandrom";
    }
    
    
    cout<<"Which Number frequnce you want :";
    cin>>fre;
    
    frequnce = frequnce_string(ch , lanth , fre );    // chack frequnce 
    
    cout<<frequnce;
    
    concatstring (ch ,chu , lanth, add , l); // call add two char array to one char array
    
    
   revers_string (ch , lanth  , chu ); 
    
    cout<<endl;
    
    char_array_print (chu  , lanth);  // call string print
    
    
    
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

// char upercase
void char_upercase (char x[] , int n , char y[]){
    
    int i;
    
    for(i=0; i<n; i++){
        
        if(x[i]>= 'a' && x[i]<= 'z'){
            
            y[i] = x[i] - 32;   // ('a' - 'A') = 32
        }
        else 
        
        y[i] = x[i];
    }
}

// count vowel
int count_vowel (char c[] , int n){
    
    int i, count = 0;
    
    for(i=0; i<n; i++){
        
        if(c[i] == 'a' || c[i] == 'e' ||c[i] == 'i' ||c[i] == 'o' ||c[i] == 'u'){
            
            count = count + 1;
        }
    }
    return count;
}

// count Digits
int count_Digits (char c[] , int n){
    
     int i, count = 0;
    
    for(i=0; i<n; i++){
        
        if(c[i] >= '0' && c[i] <= '9'){
            
            count = count + 1;
        }
    }
    return count;
    
}

// count small latter 
int count_small_latter (char c[] , int n){
    
      int i, count = 0;
    
    for(i=0; i<n; i++){
        
        if(c[i] >= 'a' && c[i] <= 'z'){
            
            count = count + 1;
        }
    }
    return count;
}

//count symble
int count_symble(char c[] , int n){
    
    int i, count = 0;
    
    for(i=0; i<n; i++){
        
        if((c[i] >= 'a' && c[i] <= 'z') || (c[i] >= 'A' && c[i] <= 'Z') || (c[i] >= '0' && c[i] <= '9')){
            
            count = count + 1;
        }
    }
    return (n - count);
    
}

// string coppy 
int string_coppy (char ch[] , char t[] , int m , int m){
    
    int i;
    
    for(i=m; i<=n; i++){
        
        t[i-m] = ch [i];      // m=2 i=2  t[0] = ch[2]
    }
    
    return n - m + 1;        // 4-2+1 = 3
}

// string compare
int steing_compare (char c[] ,char k[], int n){
    
    int i, result;
    
    result = 1;      // dortace donota same try 1 dorlam
    
    for(i=0; i<n; i++){
        
        if(c[i] != k[i]){   // na mela ata kaj korba 
            
            result = 0;
            
            break;
            
        }
        
    }
    
    return result;
}

// issubstring 
int isSubstring (char s[], int m , char t[] , int n){    

    int i, result , lanth_temp;           // m is lanth of s[]  and n is lanth of t[]
    
    char tamp [100];                    // if n=6    m=3
    
    for(i=0; i<=m-n; i++){  
        
        char_array_intialize (tamp , 100);
        
        lanth_temp = string_coppy (tamp , s , i, i+(n-1));
        
        result = steing_compare (temp , t , lanth_temp);
        
        if(result == 1){
            
           break;
        }
    }
    return result;
}

//paliandrom
int ispaliandrom (char c[] , int n){
    
    int i , result;
    
    result = 1;
    
    for(i=0; i<n; i++){
        
        if(c[i] != c[n - i - 1]){
            
            result = 0;
            break;
        }
    }
    
    return result;
}

// chack frequency 
int frequnce_string (char c[] , int n , char a ){
    
    int i , feq;
    
    for(i=0; i<n; i++){
        
        if(c[i]==a){
            
            freq = freq + 1;
        }
    }
    
    return feq;
}

// concat string
int concat_string (char c[] ,char k[], int n, char u[] , int l){
    
    
    
    return 
}

//revers string
void revers_string (char c[] , int n , char w[]){
    
    int i,j;
    
    for(j=0, i= n - 1; i>=0; i-- , j++ ){
        
       w[j] = c[i];
    }
    w[j] = '\0';
}   

