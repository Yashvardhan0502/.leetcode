# include <stdio.h>
#include <iostream>
using namespace std;

void reverse(int arr[], int start, int end){
    while (start <= end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
    }
}

void rotate(int arr[], int size, int d){
        if (size == 0) return;

        d= d% size;
//       LEFT SIDE ROTATION
       /* reverse(arr, arr + d);

        reverse(arr +d, arr + size);

        reverse(arr, arr +size);*/
//     RIGHT SIDE ROTATION
        reverse(arr ,arr + (size-d));

        reverse( arr +(size -d), arr + size)  ;

        reverse(arr, arr +size);

}
    

int main(){
    int arr[]= {1,5,6,8,4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int d = 2;
    
    cout<<"Before rotation = ";
        for(int i=0; i<size; i++){
            cout<< arr[i] <<" ";
        }
    rotate(arr,size,d);  
    cout<<endl<<"After rotation = ";  
    for(int i=0; i<size; i++){
            cout<< arr[i] <<" ";
        }
    return 0;
}