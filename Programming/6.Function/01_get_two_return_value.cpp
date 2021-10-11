// Get two valu from the function using thepointer
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void get_max_min(int arr[],int size,int* min,int* max){
    for(int i=0;i<size; i++){
        if(arr[i]>*max){
            *max = arr[i];
        }
        if(arr[i]<*min){
            *min = arr[i];
        }
    }
}
int main(){
int arr[5]={2,9,6,1,75};

int min = arr[0];
int max = arr[0];

get_max_min(arr,5,&min,&max);

cout<<"min is: "<<min<<endl;
cout<<"max is: "<<max<<endl;

return 0;
}