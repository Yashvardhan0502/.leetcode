#include <iostream>
using namespace std;
void printarr(int arr[], int size){
    for ( int i=0; i < size; i++){
        cout << arr[i ]<< " ";
    }
    cout<<endl;
}
void swapAl(int arr[], int size){
    for ( int i = 0; i < size ; i+= 2){
        int temp;
        if (i+1 < size){
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
            //swap(arr[i], arr[i+1]);  
            }
    }
}
int main() {
    int arr[] = {1,2,3,4,5};
    int size = (sizeof(arr) / sizeof(arr[0]));
    swapAl(arr,size);
    printarr(arr,size);
    return 0;
}