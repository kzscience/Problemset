#include <iostream>
using namespace std;

int main() {
	int h, n, m, x;
	cin >> x;
	while (x--) {
		cin >> h >> n >> m;
	
		while (h>20 && n>0) {
			h = (h / 2) + 10;
			n--;
		}
		while (h>0 && m>0) {
			h = h - 10;
			m--;
		}

		if (h <= 0) {	
			cout << "YES"<<endl;
		}
		else {
			cout << "NO"<<endl;
		}
	}
	
	return 0;
}
