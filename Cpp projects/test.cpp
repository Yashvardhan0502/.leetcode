# include <stdio.h>
#include <iostream>
using namespace std;

int twosum(int arr[], int size, int target){
    int start = 0;
    int end = size -1;
    
   while(start < end){
    int current_sum = arr[start] + arr[end];
    
    if (current_sum == target)
    {
        return current_sum;
    }
    else if (current_sum < target)
    {
        start++;
    }
    else
    {
        end --;
    }
    }
    return -1;
 }
int main(){
    int arr[]= {3,2,4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 6;
    int result = twosum( arr,size,target);
    if (result == -1){
        cout<<("no such pair found");
    }
    else{
        cout<<("Pair are = ")<< result << " ";
    }
    
    return 0;
   } 