#include <iostream>
using namespace std;

int main()
{
	int x;
	cin >> x;
	while (x--) {
		int n;
		cin >> n;
		int s = 0, s1 = 0;
		while (n % 2 == 0) {
			n /= 2;
			++s;
		}
		while (n % 3 == 0) {
			n /= 3;
			++s1;
		}

		if (n == 1 && s <= s1) {
			cout << 2 * s1 - s << endl;
		}
		else {
			cout << -1 << endl;
		}
	}

	
	return 0;
}
 
