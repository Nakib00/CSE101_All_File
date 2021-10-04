#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
ofstream file;
string name;

file.open("02_MY_life2.txt");

cout<<"Enter name: "<<name;
getline(cin, name);

file<<"Welcome "<<name;

file.close();


return 0;
}