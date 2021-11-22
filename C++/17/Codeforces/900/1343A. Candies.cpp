#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int *arr = new int[n];
	int* are = new int[n];

	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
		for (int j = 2; j < 10e9; ++j) {
			int p = pow(2, j) - 1;
			if (arr[i] % p == 0) {
				are[i] = arr[i] / p;
				break;
			}
		}
	}
	for (int i = 0; i < n; ++i)
	{
		cout << are[i] << endl;
	}



delete [] arr;
delete[] are;
	return 0;
}
 
