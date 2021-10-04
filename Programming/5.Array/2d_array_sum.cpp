#include <iostream>
#include <cstdlib>

using namespace std;

void value_print(int);
void array_print(int[20][20], int, int);
void array_print_1d(int[], int);
void array_random_fill(int[20][20], int, int);
int  array_sum(int[20][20], int, int);
void array_sum_c(int[20][20], int[], int, int);
void array_sum_r(int[20][20], int[], int, int);


int main(){
    // Neawz.
    int i, x[20][20], y[20], sum, sum_c, sum_r, n, n_c, n_r;
    n_c = 5;
    n_r = 5;

    array_random_fill(x, n_r, n_c);
    array_print(x, n_r, n_c);
    //sum = array_sum(x, n_r, n_c);
    cout << "C: " << endl;
    array_sum_c(x, y, n_r, n_c);
    array_print_1d(y, n_r);
    cout << "R: " << endl;
    array_sum_r(x, y, n_r, n_c);
    array_print_1d(y, n_r);


    return 0;
}

void array_random_fill(int arr[20][20], int r, int c){
    int i, j;

    for (i = 0; i < r; i = i + 1){
        for (j = 0; j < c; j = j + 1){
            arr[i][j] = rand()%100;
        }
    }
}

void array_print_1d(int arrY[], int r){
    int i, j;

    for (i = 0; i < r; i = i + 1){
        cout << arrY[i] << " ";
    }
    cout << endl;
}

void array_print(int arr[20][20], int r, int c){
    int i, j;

    for (i = 0; i < r; i = i + 1){
        for (j = 0; j < c; j = j + 1){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int array_sum(int arr[20][20], int r, int c){
    int i, j, sum;
    sum = 0;

    for (i = 0; i < r; i = i + 1){
        for (j = 0; j < c; j = j + 1){
            sum = sum + arr[i][j];
        }
    }
    return sum;
}

void array_sum_c(int arr[20][20],int arrY[], int r, int c){
    int i, j, sum;
    sum = 0;

    for (i = 0; i < r; i = i + 1){
        for (j = 0; j < c; j = j + 1){
            sum = sum + arr[i][j];
        }
        arrY[i] = sum;
        sum = 0;
    }
}

void array_sum_r(int arr[20][20], int arrY[], int r, int c){
    int i, j, sum;
    sum = 0;

    for (i = 0; i < c; i = i + 1){
        for (j = 0; j < r; j = j + 1){
            sum = sum + arr[j][i];
        }
        arrY[i] = sum;
        sum = 0;
    }
}