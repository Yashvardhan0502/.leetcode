# include <stdio.h>
#include <iostream>
using namespace std;

int largest(int arr[], int size){
    int largestno = arr[0];
    for (int i = 1; i<size; i++){
        
        if (arr[i] > largestno){
            largestno = arr[i];

    }
    }
    return largestno;
}

int main(){
    int arr[]= {3,8,4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int result  = largest(arr,size);
    if (result != -1){
        cout<<"Largest number = "<< result;
        }
    return 0;
}