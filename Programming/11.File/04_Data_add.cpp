#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    string name;
    int age;
    ofstream file;

    for(int i=0; i<=3; i++){
        file.open("04_Student_details.txt",ios::out|ios::app);

        cout<<"Enter name: ";
        getline(cin,name);
        file<<name<<"\t";

        cout<<"Enter your age: ";
        cin>>age;
        file<<age<<endl;

        cin.ignore(); //This argumant use for ignore not using itame
    }

    file.close();

return 0;
}