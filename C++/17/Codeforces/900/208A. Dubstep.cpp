#include <iostream>
int main()
{
   std::string s;
   std::cin >> s;
   for (int i = 0; i < s.size(); i++)
   {
      if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
      {
         i += 2;
         std::cout << " ";
      }
      else
      {
         std::cout << s[i];
      }
   }
}
