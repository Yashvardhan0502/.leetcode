
#include <iostream>
#include <math.h>
#include <climits>
using namespace std;
//maximum vlaue
int get_max(int arr[], int size){
    int max = INT_MIN;
    for(int i=0; i<size; i++){
        if (arr[i] > max){
        max = arr[i];
        }
    }
    return max;
}

//minimum value 
int get_min(int arr[], int size){
    int min = INT_MAX;
    
    for (int i=0; i< size; i++){
        if (arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}

int main(){
    int arr[100];
    int size;
    cout<<"Enter size= ";
    cin >> size;
    //input taking
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    cout<<"Maximun Value is "<< get_max(arr,size)<<endl;
    cout<<"Minimum Value is "<< get_min(arr,size)<<endl;

  return 0;
}