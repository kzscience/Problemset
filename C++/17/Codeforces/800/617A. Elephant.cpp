#include <iostream>
using namespace std;
 
int main()
{
	int n,s=0; 
	cin >> n;
	while (n>0) {
		n -= 5;
		s++;
	}
 
	cout << s;
	return 0;
}
 
