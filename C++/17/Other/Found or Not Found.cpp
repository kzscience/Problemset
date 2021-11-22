#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int *arr = new int[102];
	arr[100] = arr[101] = 0;
	srand(time(NULL));
	for (int i = 0; i < 100; i++) {
		arr[i] = rand() % 100;
		cout<< i + 1;
		
		if (arr[i] == n) {
			arr[100] = i;
			arr[101] = 1;
		} 
		cout << "  :  " << arr[i] << endl;
	}

	if (arr[101]) {
		cout << "\nFound -> " << arr[100] + 1 << " : " << n;
	}
	else {
		cout << "\nNot Found";
	}

	delete []arr;
}
