#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
 
int main()
{
	int n,a,b,s=0,r=0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		s = s - a + b;
		if (s > r) {
			r = s;
		}
	}
	cout << r;
	return 0;
}
