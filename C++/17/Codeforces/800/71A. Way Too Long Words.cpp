#include <iostream>
using namespace std;
 
int main()
{
    short n;
    cin >> n;
    string s;
    short max;
 
    for (int i = 0; i < n; i++) {
        cin >> s;
        max = s.length();
 
        if (max<=10) {
            cout << s << endl;
        }
        else {
            cout << s[0] << max - 2 << s[max - 1] << endl;
        }
    }
 
 
    return 0;
}
