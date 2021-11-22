#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
	int k, n, w,s=0;
	cin >> k >> n >> w;
 
 
	for (int i = 1; i <= w && w > 1; i++) {
			s += (k * i);
	}
	if (n>s) {
		cout << 0;
	}
	else {
		cout << abs(s - n);
	}
 
 
 
	
	return 0;
}
