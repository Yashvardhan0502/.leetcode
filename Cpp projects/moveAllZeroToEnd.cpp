# include <stdio.h>
#include <iostream>
using namespace std;

    void moveZeroes(int arr[], int size) {
        int nonZero = 0;

        for (int i = 0; i < size; i++) {
            if (arr[i] != 0) {
                swap(arr[i], arr[nonZero]);
                nonZero++;
            }
        }
    }


int main(){
    int arr[]= {0,0,0,0,0,3,0,2,0,3,6,7,8,9,4,8};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<"Before rotation = ";
        for(int i=0; i<size; i++){
            cout<< arr[i] <<" ";
        }
    moveZeroes(arr,size);
    cout<<endl<<"After rotation = ";  
    for(int i=0; i<size; i++){
            cout<< arr[i] <<" ";
        }
    
    return 0;
}