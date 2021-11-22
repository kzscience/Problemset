#include <iostream>
using namespace std;

int main() {
	int n, max = 0;
	string s, s1;
	cin >> n >> s;

	for (int i = 0; i < n - 1; ++i) {
		int r = 0;
		for (int j = 0; j < n - 1; ++j)
			if (s[j] == s[i] && s[j + 1] == s[i + 1])
				++r;
		if (max < r) {
			max = r;
			s1 = string(1, s[i]) + string(1, s[i + 1]);
		}
	}

	cout << s1 << endl;

	return 0;
}
