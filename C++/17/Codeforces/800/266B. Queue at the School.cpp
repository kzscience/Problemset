#include <iostream>
using namespace std;
 
int main() {
	int n, t, j = 1;
	string s;
	cin >> n >> t >> s;
	while (j <= t) {
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == 'B' && s[i + 1] == 'G') {
				s[i] = 'G';
				s[i + 1] = 'B';
				i++;
			}
		}
		j++;
	}
	cout << s;
 
	return 0;
}
