#include <iostream>
using namespace std;
 
int main() {
	int n,h,f,r=0;
	cin >> n >> h;
	for (int i = 0; i < n; i++) {
		cin >> f;
		if (f > h) {
			r += 2;
		}
		else {
			r+=1;
		}
	}
 
	cout << r;
	return 0;
}
