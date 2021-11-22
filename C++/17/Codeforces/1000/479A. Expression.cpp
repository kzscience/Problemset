#include<iostream>
int main()
{

	int a, b, c;
	std::cin >> a >> b >> c;
	int arr[6] = { a + b + c,a * b + c,a + b * c,a * b * c,(a + b) * c,a * (b + c) },
	max = arr[0];

	for (int i = 1; i < 6; i++)
	{
		if (max < arr[i]) {
			max = arr[i]; 
		}
	}
	std::cout << max;
}
