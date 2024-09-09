#include <bits/stdc++.h>

using namespace std;

vector < int > FindIntersection(int arr1[], int arr2[], int n, int m) {
  int i = 0, j = 0; // pointers
  vector < int > ans; // Uninon vector
  while (i < n && j < m) {
    if (arr1[i] < arr2[j]) // Case 1 and 2
    {
      i++;
    } else if (arr2[j] < arr1[i])
    {
      j++;
    }else{
        ans.push_back(arr1[i]);
        i++;
        j++;
    }
  
}
return ans;
}

int main()

{
  int n = 10, m = 7;
  int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int arr2[] = {2, 3, 4, 4, 5, 11, 12}; 
  vector < int > ans = FindIntersection(arr1, arr2, n, m);
  cout << "Union of arr1 and arr2 is  " << endl;
  for (auto & val: ans)
    cout << val << " ";
  return 0;
}

