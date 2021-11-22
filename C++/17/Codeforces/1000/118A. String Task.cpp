#include <iostream>
using namespace std;
int main() {

	string s;
	cin >> s;
	for (int i = 0, j = 0; i < s.size(); i++) {
		if (s[i] >= 'A' && s[i] <= 'Z') {
			s[i] += 32;
		}
		if (s[i] == 'a' || s[i] == 'o' || s[i] == 'e' || s[i] == 'i' || s[i] == 'y' || s[i] == 'u') {
			s[i] = ' ';
		}
	}

	for (int i = 0; i < s.size(); i++) {
		if (s[i] == ' ') {
			continue;
		}

		else {
			cout << "." << s[i];
		}
	}
}
