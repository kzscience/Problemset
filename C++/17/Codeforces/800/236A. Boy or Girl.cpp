#include <iostream>
#include <algorithm>
using namespace std;
 
int main()
{
	string s;
	cin >> s;
	int sum = 0;
	sort(s.begin(), s.end());
	for (int i = 0; i < s.size(); i++) {
		if (s[i] != s[i + 1]) {
			sum++;
		}
	}
	if (sum % 2 == 0) {
		cout << "CHAT WITH HER!";
	}
	else {
		cout << "IGNORE HIM!";
	}
	
	return 0;
}
