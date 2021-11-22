#include <iostream>
using namespace std;

int main() {
	int n, r = 0;
	string s;
	cin >> n >> s;
	if (s[0] == 'S' && s[n-1] == 'F') {
			cout << "YES";
	}
	else {
		cout << "NO";
	}

	return 0;
}
