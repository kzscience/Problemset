#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int* t = new int[n];
	for (int i = 0; i < n; ++i) {
		cin>>t[i];
	}

	for (int i = 0; i < n; ++i) {
		int Year2021 = t[i] % 2020;
		int Year2020 = (t[i] - Year2021) / 2020 - Year2021;

		if (Year2020 >= 0 && 2020 * Year2020 + 2021 * Year2021 == t[i]) {
			cout << "YES"<<endl;
		}
		else {
			cout << "NO"<<endl;
		}

	}

	delete[] t;
}
