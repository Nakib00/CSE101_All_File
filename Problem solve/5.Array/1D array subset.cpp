#include <iostream>
using namespace std;

void array_print(int[], int);
void array_initialize(int [], int);
int array_copy(int[], int[], int, int);
int isEqual(int[], int[], int);
int array_input(int[]);
int isSubset(int [], int , int [], int);
void array_set_print(int[], int);
int array_search_number(int [], int, int);
int tracker_verifier(int [], int);
int isSubset(int[], int, int [], int);

int main()
{
    int l_set[20], s_set[20], l_size, s_size;

    cout << "Smaller set" << endl;
    s_size = array_input(s_set);

    cout << "Larger set " << endl;
    l_size = array_input(l_set);

    if(isSubset(l_set, l_size, s_set, s_size) == 1){
        array_set_print(s_set, s_size);
        cout << " is a subset of ";
        array_set_print(l_set, l_size);
    }
    else{
        array_set_print(s_set, s_size);
        cout << " is not a subset of ";
        array_set_print(l_set, l_size);
    }

    return 0;
}

// print array forward
void array_print(int x[], int n){
    int i;
    for(i=0; i<n; i++){

        cout<<x[i]<<" ";
    }
    cout <<endl;
}

//checks if a set is a subset of another set. returns 1 or 0
int isSubset(int large_set[], int size_of_large_set, int subset[], int size_of_subset)
{
    int i, temp, track[20], result;
    //initialize tracker array same size as the subset
    array_initialize(track, size_of_subset);

    for(i = 0; i < size_of_subset; i++){

        //search first element of subset array in large set
        temp = array_search_number(large_set, size_of_large_set, subset[i]);

        //tracker array keeps track of each element whether its present or not
        track[i] = temp;
    }

    result = tracker_verifier(track, size_of_subset);

    return result;
}

//function to see if two int arrays are equal or not
int isEqual(int a[], int b[], int length)
{
    int i, eq;

    eq = 1;
    for(i = 0; i < length; i++){
        if(a[i] != b[i]){
            eq = 0;
            break;
        }
    }
    return eq;
}
// Function to initialize an array
void array_initialize(int a[], int array_size)
{
    int i;

    for(i = 0; i < array_size; i = i + 1){
        a[i] = 0;
    }
}
//copies int array from a specific position till a specific position
int array_copy(int cpy[], int copy_from[], int pos_of_copy, int copy_till)
{
    int i;

    for(i = pos_of_copy; i <= copy_till; i++){
        cpy[i - pos_of_copy] = copy_from[i];
    }

    return copy_till - pos_of_copy + 1;
}

int array_input(int x[]){
	int n, i;
	cout << "Number of elements: ";
	cin >> n;
	for (i = 0; i < n; i ++){
		cout << "[" << i << "] = ";
		cin >> x[i];
	}
	return n;
}
void array_set_print(int a[], int size)
{
    int i;

    cout << "{";
    for(i = 0; i < size - 1; i ++){
        cout << a[i] << "," ;
    }
    cout << a[i] << "}";

}
//search a number in an array
int array_search_number(int a[], int array_size, int num)
{
    int i,result;

    result = 0;
    for(i = 0; i < array_size; i++){

        if (a[i] == num){
            result = 1;
        }
    }
    return result;
}
//verifies a tracker array whether it has all 1
int tracker_verifier(int track[], int size)
{
    int i, res;

    res = 1;
    for(i = 0; i < size; i++){
        if(track[i] != 1){
            res = 0;
            break;
        }
    }

    return res;
}
