// Online C++ compiler to run C++ program online
#include <iostream>
#include <math.h>
using namespace std;
//decimal to binary
int main() {
/*   int n;
   cin >> n;
   int i=0 , ans = 0;
   while ( n != 0){
       int bit = n & 1;
       
       ans = (bit * pow(10, i)) + ans;
       n = n >> 1;
       i++;
   }*/
  //binary to decIMAL 
   int n;
   cin >> n;
   
   int i=0, ans=0;
   
   while( n!=0){
       int digit = n % 10;
       
       if (digit == 1){
            ans = ans + pow(2, i);
       }
      
       n= n/10;
       i++;
       
   }
   
    cout<< "answer = " << ans;
    return 0;
}