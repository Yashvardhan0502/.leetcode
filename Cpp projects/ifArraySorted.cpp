# include <stdio.h>
#include <iostream>
using namespace std;

int sorted(int arr[], int size){
    for (int i = 1; i<size; i++){
        
    if (arr[i] >= arr[i-1]){

    }
    else{
        return false;
        }
    }
     return true;
}

int main(){
    int arr[]= {2,3,4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int result  = sorted(arr,size);
    if (result != false){
        cout<<"Sorted";
        }
    else{
        cout<<"not sorted";
    }    
    return 0;
}