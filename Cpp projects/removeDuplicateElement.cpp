# include <stdio.h>
#include <iostream>

using namespace std;

int dub(int arr[], int size){
    int i = 0;
    for (int j= 1; j < size; j++){
        if (arr[i] != arr[j]){
            arr[i+1] = arr[j];
            i++; // to check next unique element
        }
    }
    return i+1; // returns size of array as it would stop on eg index 2 and hence size will be 2+1=3(keep index in mind)
}

int main(){
    int arr[]= {1,2,3,4,5,5,5,6,7,8,9,10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int result  = dub(arr,size);
    if (result != -1){
        cout<<"Unique elements  = "<< result;
        }
    return 0;
}