#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
   int n, sum = 0, sum1 = 0, r = 0;
   cin >> n;
   int *arr = new int[n];
   for (int i = 0; i < n; i++)
   {
      cin >> arr[i];
      sum += arr[i];
   }

   sort(arr, arr + n);
   for (int i = n - 1; i >= 0; i--)
   {
      sum1 += arr[i];
      sum -= arr[i];
      r++;
      if (sum1 > sum)
      {
         break;
      }
   }

   cout << r;

   delete[] arr;
   return 0;
}
