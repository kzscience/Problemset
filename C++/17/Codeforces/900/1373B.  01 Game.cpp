#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	string s;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> s;
		int t = s.size(), x = 0, y = 0;
        for (int j = 0; j < t; j++) {
            if (s[j] == '1')x++;
            else y++;
        }
        int r = min(y, x);
        if (r == 0 || r % 2 == 0) {
            cout << "NET\n";
        }
        else {
            cout << "DA\n";
        }
           
    }

	return 0;
}

