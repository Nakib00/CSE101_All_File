#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
string line;

//Here we use "ifstream" for read the file
ifstream file("01_MY_life.txt");

//This argumant read the file and store all text in line variable
while(getline(file, line)){ 
    cout<<line<<endl;
} 
file.close();
return 0;
}