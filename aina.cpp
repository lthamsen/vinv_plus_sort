#include <iostream>
#include <bits/stdc++.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 20

using namespace std; 

//What values to compare in vector, see function below main
struct sort_left {
    bool operator()(const long (&left)[SIZE], const long (&right)[SIZE]) {
        return left[0] < right[0];
    }
};

int main() {
    srand(time(NULL)); //Actual randomness

    //Declaring 20x20 2D array
    int arr[SIZE][SIZE] = { { 0 } };

    //Filling array with randn
    for (size_t i = 0; i < SIZE; i++) {
        for (size_t j = 0; j < SIZE; j++) {
            arr[i][j] = rand() % 100 + 10;
        }
    }
    
    //Printing array contents
    for (size_t i = 0; i < SIZE; i++) {
        for (size_t j = 0; j < SIZE; j++) {
            cout << arr[i][j] << ' ';
        }
        cout << endl;   
    }

    //Creating stl array for use in sorting
    array<array<int, SIZE>, SIZE> arr1{};

    //Assigning array vals to stl array
    for (size_t i = 0; i < SIZE; i++) {
        for (size_t j = 0; j < SIZE; j++) {
            arr1[i][j] = arr[i][j];
        }   
    }
    
    cout << endl << endl;
    //Sorting stl array
    sort(begin(arr1), end(arr1));

    //Printing result
    for (size_t i = 0; i < SIZE; i++) {
        for (size_t j = 0; j < SIZE; j++) {
            cout << arr1[i][j] << ' ';
        }
        cout << endl;   
    }
}

