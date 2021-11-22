#include <iostream>
using namespace std;
int main() {
	int r = 0;
	std::string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '4' || s[i] == '7') {
			r++;
		}
	}
 
	if (r == 4 || r == 7 && s.size() > 1) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
 
	return 0;
}
