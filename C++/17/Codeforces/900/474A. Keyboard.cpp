#include <iostream> 
using namespace std;

int main() {
	string s = "qwertyuiopasdfghjkl;zxcvbnm,./";
	char t;
	string s1;
	cin >> t >> s1;
	for (int i = 0; i < s1.size(); ++i) {
		int n = s.find(s1[i]);
		if (t == 'R') {
			cout << s[n - 1];
		}
		else if (t == 'L') {
			cout << s[n + 1];
		}
	}

	return 0;
}
