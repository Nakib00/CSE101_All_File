#include <iostream>
#include <cstdlib>
using namespace std;

int array_input(int[]);
void array_print(int[], int);
void array_print_backward(int[], int);
float average_array(int [], int);
int array_input_rand_range(int[]);
int array_input_rand(int[]);
int array_frequency(int[],int);
void array_search_number(int[], int);
void array_swap(int[], int[], int);
int array_equal(int[], int[], int);
void selection_sort(int[], int);
void bubble_sort(int[], int);


int main(){
	int x[10], y[10], n_x, n_y, eq; 	//n_x will have the size of array

    n_x = array_input_rand(x);
    array_print(x, n_x);

    bubble_sort(x, n_x);
    array_print(x, n_x);

	return 0;
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

// print array forward
void array_print(int x[], int n){
    int i;
    for(i=0; i<n; i++){

        cout<<x[i]<<" ";
    }
    cout <<endl;
}

//print array backward
void array_print_backward(int x[], int n){
    int i;
    for(i = n-1 ; i >= 0; i --){        //n-1 cause array index ends at n-1

        cout<<x[i]<< " ";
    }
    cout << endl;
}

//average array function
float average_array(int a[], int array_size)
{
    int i, sum;
    float average;

    sum = 0;
    for(int i = 0; i < array_size; i++){
        sum = sum + a[i];
    }

    average = sum / array_size;

    return average;

}
// random array input within a range
int array_input_rand_range(int a[])
{
    int max_num, min_num;
    int n, i, temp;
	cout << "Number of elements: ";
	cin >> n;

	cout << "Enter minimum number in range: ";
	cin >> min_num;
	cout << "Enter maximum number in range: ";
	cin >> max_num;

	for (i = 0; i < n; i ++){
		temp = rand() % ( (max_num - min_num) + min_num);       //check
		a[i] = temp;
	}

	return n;

}
//array input rand without range
int array_input_rand(int a[])
{
    int n, i, temp;
	cout << "Number of elements: ";
	cin >> n;

	for (i = 0; i < n; i ++){
		temp = rand() % 50;
		a[i] = temp;
	}

	return n;
}
//search a number in an array
void array_search_number(int a[], int array_size)
{
    int num, i;

    cout << "Enter the number to search: ";
    cin >> num;

    for(i = 0; i < array_size; i++){

        if (a[i] == num){
            cout << "a [" << i << "] = " << num;
        }
    }
}
//array swap
void array_swap(int a[], int b[], int array_size)
{
    int i, temp;

    for(i = 0; i < array_size; i++){
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}
//check if two arrays are equal or not
int array_equal(int a[], int b[], int array_size)
{
    int i, isEqual;

    isEqual = 1;
    for(i = 0; i < array_size; i++){

        if(a[i] != b[i]){
            isEqual = 0;
            break;
        }
    }
    return isEqual;     //will return 0 or 1
}
//selection sort function
void selection_sort(int a[], int array_size)
{
    int i, j, temp, min_index;

    //this loop will change the element incrementally
    for(j = 0; j < array_size - 1; j = j +1){       //array_size -1 cause the last element will be sorted
        min_index = j;
        //loop to check values in unsorted array
        for(i = j + 1; i < array_size; i = i + 1){
            if(a[i] < a[min_index]){
                min_index = i;
            }
        }
        //swap the value with the found element
        temp = a[j];
        a[j] = a[min_index];
        a[min_index] = temp;
    }
}
int array_frequency(int a[],int array_size)
{
    int i, num, freq;

    cout << "Enter number to check frequency: ";
    cin >> num;

    freq = 0;
    for(i = 0; i < array_size; i++){
        if(a[i] == num){
            freq = freq + 1;
        }
    }

    return freq;
}
void bubble_sort(int a[], int array_size)
{
    int i, j,temp;
    //loop to sort every number
    for(j = 0; j < array_size - 1; j = j +1){
        //this loop pushes the largest bubble at the end
        for(i = 0; i < array_size -1 ;i = i +1){
            if (a[i] > a[i + 1]){
                temp = a[i];
                a[i] = a [i + 1];
                a[i + 1] = temp;
            }
        }
    }
}
