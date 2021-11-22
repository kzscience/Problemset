#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n,r=0,x=0;
    cin >> n;
    int *arr = new int [12];   
    for (int i = 0; i < 12; i++) {
        cin >> arr[i];
    }
    if (n != 0) {
        sort(arr, arr + 12);

        for (int i = 0; i < 12; i++) {
            r += arr[12 - (i + 1)];
            x++;

            if (r >= n) {
                break;
            }
        }

        if (r >= n) {
            cout << x;
          
        } else{
            cout << -1;
        }
    }
    else {
        cout << x;
    }

    delete [] arr;
    return  0;
}
