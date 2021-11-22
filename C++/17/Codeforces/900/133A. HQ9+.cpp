#include <iostream>

using namespace std;

int main()
{
   int b = 0;
   string a;
   cin >> a;

   for (int i = 0; i < a.size(); i++)
   {
      if (a[i] == 'H' || a[i] == 'Q' || a[i] == '9')
      {
         b++;
      }
   }

   if (b > 0)
   {
      cout << "YES";
   }
   else
   {
      cout << "NO";
   }

   return 0;
}
