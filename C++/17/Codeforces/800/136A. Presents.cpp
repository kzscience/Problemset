#include <iostream>

using namespace std;

int main()
{
   int n;
   cin >> n;
   int f[n];
   int g[n];

   for (int i = 1; i <= n; i++)
   {
      cin >> f[i];
      g[f[i]] = i;
   }

   for (int i = 1; i <= n; i++)
   {
      cout << g[i] << " ";
   }

}
