#include <iostream>
using namespace std;

int main() {
	int a,b;
	a = b = 0;
	string s;
	cin >> s;
	for (auto i : s) {
		if (i == '0') {
			a++;
			b = 0;
		}
		else {
			b++;
			a = 0;
		}

		if (a == 7 || b == 7) {
			break;
		}
	}


	if (a == 7 || b == 7) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}

	
}
