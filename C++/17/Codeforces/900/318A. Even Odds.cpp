#include <iostream>
int main()
{
   long long n, k, s, r;
   std::cin >> n >> k;
   if (n % 2 == 0)
   {
      s = n / 2;
   }
   else
   {
      s = (n / 2) + 1;
   }

   if (k <= s)
   {
      r = (2 * k) - 1;
   }
   else
   {
      r = (k - s) * 2;
   }

   std::cout << r;

   return 0;
}
