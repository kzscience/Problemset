#include <iostream>
using namespace std;
int main() {
       int n, r = 0;
       cin >> n;
       int *arr = new int[n];
       for (int i = 1; i <= n; i++)
       {
          cin >> arr[i];
          if (arr[i - 1] != arr[i])
          {
             r++;
          }
       }
     
       cout << r;
       delete[] arr;
     
       return 0;
}
