#include <iostream>
#include <algorithm>
int main()
{
   int n;
   std::cin >> n;
   int *arr = new int[n];
   for (int i = 0; i < n; i++)
   {
      std::cin >> arr[i];
   }

   std::sort(arr, arr + n);

   for (int i = 0; i < n; i++)
   {
      std::cout << arr[i] << " ";
   }

   delete[] arr;
   return 0;
}
