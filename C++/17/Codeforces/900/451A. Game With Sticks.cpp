#include <iostream>
int main()
{
   int n, m, i = 1, c = 0;
   std::cin >> n >> m;
   for (;;)
   {
      if (n - i == 0)
         break;
      if (m - i == 0)
         break;
      i++;
      c++;
   }

   if (c % 2 == 0)
   {
      std::cout << "Akshat";
   }
   else
   {
      std::cout << "Malvika";
   }

   return 0;
}
