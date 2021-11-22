#include <iostream>
using namespace std;
 
int main() {
	int n;
	int a, b, c, d;
	cin >> n;
	for (int i = 0; i < n; i++) {
		n++;
		a = n / 1000;
		b = (n / 100) % 10;
		c = (n / 10) % 10;
		d = n % 10;
		if (a != b && a != c && a != d && b != c && b != d && c != d) {
			break;
		}
	}
	cout << n;
 
	return 0;
}
