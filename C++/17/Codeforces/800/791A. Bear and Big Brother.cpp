#include <iostream>
using namespace std;
 
int main()
{
	int a, b,r=0;
	cin >> a >> b;
	while (b>=a) {
		a *= 3;
		b *= 2;
		r++;
	}
	cout << r;
	return 0;
}
