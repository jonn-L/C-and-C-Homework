/*
CH-230-A
a9 p8.cpp
Jon Lumi
jlumi@jacobs-university.de
*/
#include<iostream>

using namespace std;

//Function that subtracts the max from all the values in the array
void subtract_max(int *arr, int n){
    int max = arr[0];

    //First we iterate to find the max value
    for (int i = 0; i < n; i++){
        if (arr[i] > max){
            max = arr[i];
        }
    }

    //Then we subtract it from each element in array
    for (int i = 0; i < n; i++){
        arr[i] = arr[i] - max;
    }
}

// Function that deallocates the memory
void deallocate(int *arr){
    delete [] arr;
}

int main(){
    //Declare n and ask for it's value
    int n;
    cin >> n;

    //Declare pointer array and allocate memory based on n
    int *arr = new int[n];

    //Ask for the value of each element 
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    //Call function
    subtract_max(arr, n);

    //Print out array after subratction
    for (int i = 0; i < n; i++){
        cout << arr[i] << endl;
    }

    //Deallocate memory
    deallocate(arr);

    return 0;
}