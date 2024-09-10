// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


void reverse(int arr[], int size){
    int l=0;
    int r = size-1;
    while(l <= r){
        swap(arr[l],arr[r]);
        l++;
        r--;
    }
}
void printArr(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<< arr[i] << " ";
    }
    cout<< endl;
}
int main() {
   int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   reverse(arr,10);
   printArr(arr,10);

    return 0;
}