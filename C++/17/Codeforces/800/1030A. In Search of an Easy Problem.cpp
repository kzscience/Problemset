#include <iostream>
     
    using namespace std;
     
    int main()
    {
       int n;
       cin >> n;
     
       int *arr = new int[n];
       for (int i = 0; i < n; i++)
       {
          cin >> arr[i];
          if (arr[i] == 1)
          {
             cout << "Hard" << endl;
             break;
          }
          else if (i == n - 1)
          {
             cout << "Easy" << endl;
          }
       }
     
       delete[] arr;
       return 0;
    }
