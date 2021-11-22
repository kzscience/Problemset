#include <iostream>
using namespace std;
 
int main()
{
	int a=0, b = 0;
	string s;
	char s1;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		s1 = s[i];
		if (s1 <= 90) {
			a++;
		}
		else
			b++;
		}
 
	for (int i = 0; i < s.size(); i++) {
		if (a > b) {
			s[i] = toupper(s[i]);
		}
		else {
			s[i] = tolower(s[i]);
		}
	}
	cout << s;
	return 0;
}
