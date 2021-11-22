#include <iostream>
using namespace std;
int main()
{
    int n, p, v, t,s=0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> p >> v >> t;
        if (p + v + t > 1) {
            s++;
        }
    }
   
    cout << s;
    return 0;
}
