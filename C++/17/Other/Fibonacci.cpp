#include <iostream>
int main()
{

	unsigned __int64* arr = new unsigned __int64[100];

	arr[0] = 0;
	arr[1] = 1;

	for (int i = 2; i < 100; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
	}

	for (int i = 0, j = 1; i < 100; i++, j++) {
	std::cout<<j<<") " << arr[i] << std::endl;
	}

	delete[]arr;
}
