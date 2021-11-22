#include <iostream>

using namespace std;

int main()
{
   int n;
   string result = "";
   cin >> n;
   for (int i = 0; i < n; i++)
   {
      if (i % 2 == 0)
      {
         if (i == 0)
         {
            result += " I hate";
         }
         else
         {
            result += " that I hate ";
         }
      }
      else
      {
         if (i == 0)
         {
            result += " I love";
         }
         else
         {
            result += " that I love ";
         }
      }
   }

   cout << result + " it";
   return 0;
}
