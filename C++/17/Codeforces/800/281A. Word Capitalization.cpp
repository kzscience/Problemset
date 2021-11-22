#include <iostream>
using namespace std;
 
 
int main()
{
	std::string s;
	char f;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (i == 0) {
			f = toupper(s[0]);
			cout << f;
		}
		else {
			cout << s[i];
		}
	}
 
	return 0;
}
