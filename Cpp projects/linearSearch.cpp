# include <stdio.h>
#include <iostream>
using namespace std;

int linearS(int arr[], int size,int t){
    for (int i = 0; i<size; i++){
        
        if (arr[i] == t){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[]= {3,8,4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int t = 1;
    int result  = linearS(arr,size,t);
    if (result != -1){
        cout<<"Value about at index = "<< result;
        }else{
            cout<<"Value not present .";
        }
    return 0;
}