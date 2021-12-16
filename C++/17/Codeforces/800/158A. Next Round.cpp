#include <iostream>
using namespace std;

int main()
{
    int n, k,s=0;
    cin >> n >> k;
    int *arr = new int[n];
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
 
    for (int i = 1; i <= n; i++) {
        if (arr[k] <= arr[i] && arr[i]>0) {
            s++;
       }
    }
    cout << s;
    delete[] arr;
    
}
