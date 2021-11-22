#include <iostream>
using namespace std;
 
int main() {
	int n,x,y,r=0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		if (y-x > 1) {
			r++;
		}
	}
	cout << r;
	return 0;
}
