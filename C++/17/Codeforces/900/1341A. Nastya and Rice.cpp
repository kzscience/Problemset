#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, a, b, c, d;
		cin >> n >> a >> b >> c >> d;

		int B = n * (a - b), 
			A = n * (a + b);

		if (A < c - d || c + d < B) {
			cout << "No"<<endl;
		}
		else {
			cout << "Yes"<<endl;
		}
		
	}



	return 0;
}
