/*
//Question 1
#include <iostream>
using namespace std;
string modify(string s)
{
    int n=s.size();
    string store="";
    for(int i=0;i<n;i++){

        if((s[i]>='a' && s[i]<='z')||(s[i]>='A' && s[i]<='Z')){
            store=store+s[i];
        }
    }
    return store;
}
int main()
{
    cout<<modify("ABLD777788")<<endl;
    cout<<modify("12345XYZ")<<endl;
    cout<<modify("Zsdfhoas9(^&(Y OH797hjhl")<<endl;
    return 0;
}
*/
/*
//Question 2:
#include <iostream>
using namespace std;

void percentage(double *x, double *y)
{
    double z = *y/ *x;
    *x=z;
}

int main()
{
    double a = 0, b = 0;
    cout << "Enter the first positive number\n";
    cin>>a;
    cout << "Enter the second positive number\n";
    cin>>b;
    int c=a;
    percentage(&a, &b);
    cout << c<<" is "<<a<<"%"<< " of "<<b<<endl;
    return 0;
}
*/
/*

//Question 3

#include <iostream>
using namespace std;

int main()
{
    //string str = "GAAATTCGGGCTGCCCTTTC";
    char checkCharacterA = 'A';
    char checkCharacterC = 'C';
    char checkCharacterG = 'G';
    char checkCharacterT = 'T';
    int countA = 0;
    int countC = 0;
    int countG = 0;
    int countT = 0;
    int strcount = 0;
    float perA,perC,perG,perT;

    char str[100];
    cout << "Enter a string: ";
    cin.get(str, 100);
    for (int i = 0; str[i]; i++) // This means if the conduction for the for statement get a null "\0" it will terminate the source
    {

        strcount=strcount+1;
    }

    for (int i = 0; i < strcount; i++)
    {

        if (str[i] ==  checkCharacterA)
        {
            countA= countA+1;
        }
        else if (str[i] ==  checkCharacterC)
        {
            countC=countC+1;
        }

        else if (str[i] ==  checkCharacterG)
        {
            countG=countG+1;
        }
        else if (str[i] ==  checkCharacterT)
        {
            countT=countT+1;
        }
    }
    perA=(countA*100)/strcount;
    perC=(countC*100)/strcount;
    perG=(countG*100)/strcount;
    perT=(countT*100)/strcount;
    cout << "Number of A: " << countA<<" Percentage:"<<perA<<endl;
    cout << "Number of C: " << countC;
    cout<<" Percentage:"<<perC<<endl;
    cout << "Number of G: " << countG;
    cout<<" Percentage:"<<perG<<endl;
    cout << "Number of T: " << countT;
    cout<<" Percentage:"<<perT<<endl;
    return 0;
}
*/

/*
//Question 4

#include <iostream>
using namespace std;
int factorial(int n){
    int fac=1;
    for(int i=2;i<=n;i++){
        fac*=i;
    }
    return fac;
}
double add(double b,int e){
    double output=b+e;

    return output;
}

double cos(double x, double y){
    double output=add(x,y)/factorial(1)-add(x,y)/factorial(3)+add(x,y)/factorial(5)-add(x,y)/factorial(7);
    return output;
}

int main()
{
    cout<<cos(2,4);
    return 0;
}
*/
/*
//Question 5
//anagram-like if we can create 2 words by using same chars,like (heart,earth)
#include<iostream>
using namespace std;
bool  anagram(string word1, string word2)
{
    char x;
    for(int i=0;i<word1.length();i++)
    {
        for(int j=i+1;j<word1.length();j++)
        {
           if(word1[i]>word1[j])
           {
                x=word1[i];
                word1[i]=word1[j];
                word1[j]=x;

           }
        }
    }
    cout<<word1<<endl;
 for(int i=0;i<word2.length();i++)
    {
        for(int j=i+1;j<word2.length();j++)
        {
           if(word2[i]>word2[j])
           {
                x=word2[i];
                word2[i]=word2[j];
                word2[j]=x;
           }
        }
    }
    cout<<word2<<endl;

    if(word1==word2)
    {
         return true;
    }
    else
    {
        return false;
    }

}
int main()
{
    string word1,word2;
    getline(cin,word1);
    getline(cin,word2);
    bool x= anagram(word1,word2);
    if(x==true)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }

    return 0;
}

*/

/*

//Question 6

#include<iostream>
using namespace std;
void count_fruits(string fruits[],int s)
{
    int c=0,c1=0,c2=0;
    for(int i=0;i<s;i++)
    {
        if(fruits[i]=="apple")
        {
            c++;
        }
        else if(fruits[i]=="orange")
        {
            c1++;
        }
        else if(fruits[i]=="banana")
        {
            c2++;
        }
    }
    cout << "apple = " <<  c << endl;
    cout << "orange = " <<  c1 << endl;
    cout << "banana = " <<  c2 << endl;

}
int main()
{
    string fruits[10] = {"apple","orange","banana","banana","banana","banana","apple","apple","apple","orange"};
    count_fruits(fruits,10);
    return 0;
}
*/
/*

//Question 7
#include<iostream>
#include<string>

using namespace std;

string wordReverse(string str)
{
    int n=str.length();
    string result;

    for(int i=str.length()-1;i>=0;--i)
    {
        if(str[i]==' ')
        {
            for(int j=i+1;j<n;++j)
                {
                    //cout<<j<<"..."<<end<<endl;
                    result += str[j];
                }
            result += ' ';
            n = i;
        }
    }
    for(int j=0;j<n;++j)
        {
            result += str[j];
        }

    return result;
}

int main()
{
    string str;
    cout<<"Enter Your String :";
    getline(cin,str);
    cout<<endl;
    cout << wordReverse(str);

    return 0;
}
*/
