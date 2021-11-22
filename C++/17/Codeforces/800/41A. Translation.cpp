#include <iostream>
using std::cin;
using std::cout;
 
int main() {
	std::string s, s1;
	int r = 0;
	cin >> s >> s1;
	for (int i = 0; i < s.size(); i++) {
		if (s[s.size() - i - 1] == s1[i]) {
			r++;
		}
	}
	if (r == s.size()) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
 
	return 0;
}
