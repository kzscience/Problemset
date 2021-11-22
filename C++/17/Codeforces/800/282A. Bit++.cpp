#include <iostream>
using namespace std;
 
int main()
{
    int n, x = 0;
    string y;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> y;
        if (y[0] == '+' || y[1] == '+') {
            x++;
        }
        else {
            x--;
        }
    }
        cout << x;
    return 0;
}
