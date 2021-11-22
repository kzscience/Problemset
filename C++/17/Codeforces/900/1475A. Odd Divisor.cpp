#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	__int64* t = new __int64[n];
	for (int i = 0; i < n; ++i) {
		cin >> t[i];
	}

	for (int i = 0; i < n; ++i) {
		if (t[i] & (t[i] - 1)) {
			cout << "YES" << endl;
		}
		else  {
			cout << "NO" << endl;
		}
	}

	delete[] t;

}
