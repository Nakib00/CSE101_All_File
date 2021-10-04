//if you want to add new anything in existing file
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
ofstream file;
string name;

file.open("02_MY_life2.txt",ios::out|ios::app); //This argumant for add new text in existing file

cout<<"Enter name: "<<name;
getline(cin, name);

file<<"Welcome "<<name<<"\t";

file.close();

cout<<"Data is saved";

return 0;
}