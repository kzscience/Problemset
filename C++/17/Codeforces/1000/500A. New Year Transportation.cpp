#include <iostream>
int main()
{

	int cell, index, flag = 0, j;
	std::cin >> cell >> index;
	int* arr = new int[cell - 1];
	for (int i = 0; i < cell-1; i++)
	{
		std::cin >> arr[i];
	}

	for (j= 1; j <= cell-1; j+= arr[j - 1])
	{
		if(j == index) {
			flag++;
			break;
		}
	}

	if (j == index) {
		flag++;
	}

	if (flag!=0) {
		
		std::cout << "YES";
	}
	else {
		std::cout << "NO";
	}

	delete[]arr;
}
