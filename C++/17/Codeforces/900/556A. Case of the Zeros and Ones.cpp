#include <iostream>

using namespace std;

int main()
{    
    int n, null = 0, one = 0;
    cin >> n;
    char t;
    for (int i = 0; i < n; ++i) {
        cin >> t;
        if (t == '0')
            ++null;
        else
            ++one;
    }
    cout << n - min(one, null) * 2;

    
    return  0;
}
