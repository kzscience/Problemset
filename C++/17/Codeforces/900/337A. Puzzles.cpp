#include <iostream>
#include <algorithm>
int main()
{
   int k, n, m = 0, r;
   std::cin >> k >> n;
   int *arr = new int[n];
   for (int i = 0; i < n; i++)
   {
      std::cin >> arr[i];
   }

   std::sort(arr, arr + n);
   m = arr[n - 1] - arr[0];

   for (int i = k; i <= n; i++)
   {
      r = arr[i - 1] - arr[i - k];
      r = abs(r);
      m = std::min(m, r);
   }

   std::cout << m;
   delete[] arr;
   return 0;
}
