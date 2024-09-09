# include <stdio.h>
#include <iostream>
using namespace std;


int slarge = -1;
int sLargest(int arr[], int size){
    int largest = arr[0];
    for (int i =1; i < size; i++){
        if (arr[i] > largest){
            slarge = largest;
            largest = arr[i];
        }
        else if (arr[i] > slarge && arr[i] != largest){
            slarge = arr[i];
        }
    }
    
if (size <= 1) {
        return -1; // Or any appropriate indicator for invalid input
    }

        return slarge;}

int main() {
    int arr[] = {6, 2, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    int secondLargest = sLargest(arr, size);

    if (secondLargest != -1) {
        cout << secondLargest << " ";
    } else {
        cout << "Array has less than two elements";
    }

    return 0;
}