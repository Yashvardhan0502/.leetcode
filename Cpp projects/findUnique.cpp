# include <iostream>
using namespace std;

int findUnique(int *arr, int size)
{
    int ans;
    for (int i = 0; i < size; i++) {
      ans = ans ^ arr[i];
    }
    return ans;
}


int main(){
    int arr[]= {3,8,4};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << findUnique(arr, size);

    return 0;
}