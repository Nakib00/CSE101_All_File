//How to return array from function
#include <iostream>
using namespace std;

int* fun(int n)
{
	int* arr = new int[100];

	/* Some operations on arr[] */
	for(int i=0;i<n; i++){
        cout<<i<<" :";
        cin>>arr[i];
    }

	return arr;
}

int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
	int* ptr = fun(n);
	for(int i=0;i<n; i++){
        cout<<ptr[i]<<" ";
    }
	delete[] ptr; //allocated memory must be deleted
	return 0;
}


