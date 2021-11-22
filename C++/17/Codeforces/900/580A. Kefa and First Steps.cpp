#include <iostream>
int main()
{
   int n;
   std::cin >> n;
   int *arr = new int[n];
   for (int i = 0; i < n; i++)
   {
      std::cin >> arr[i];
   }
   int r = 0, k = 1;
   for (int i = 1; i < n; i++)
   {
      if (arr[i] >= arr[i - 1])
      {
         k++;
      }
      else
      {
         r = std::max(r, k);
         k = 1;
      }
   }
   r = std::max(r, k);
   std::cout << r;
   return 0;
   delete[] arr;
   return 0;
}
