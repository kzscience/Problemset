#include <iostream>
#include <ctime>
using namespace std;

int NOD(int a, int b)
{
    while (a > 0 && b > 0){

        if (a > b){
	a %= b;	
	}

        else{
	b %= a;
	}
            
    }
    return a + b;
}

void FoundElement() {
	int n;
	cin >> n;
	int* arr = new int[102];
	arr[100] = arr[101] = 0;
	srand(time(NULL));
	for (int i = 0; i < 100; i++) {
		arr[i] = rand() % 100;
		cout <<"["<< i + 1<<"] ";

		if (arr[i] == n) {
			arr[100] = i;
			arr[101] = 1;
		}
		cout<< arr[i] << endl;
	}

	if (arr[101]) {
		cout << "\nFound ["<< arr[100] + 1 << "] " << n;
	}
	else {
		cout << "\nNot Found";
	}

	delete[]arr;
}

int Sum() {
	int s=0;
	for (int i = 0; i <= 100; ++i) {
		s += i;
	}
	return s;
}

int SumN(int n) {
	int s = 0;
	for (int i = 0; i <= n; ++i) {
		if (i % 2 != 0) {
			s += i;
		}
	}

	return s;
}

int Factorial(int n) {
	int s = 1;
	for (int i = 1; i <=n; ++i) {
		s *= i;
	}
	return s;
}

int main()
{
    setlocale(LC_ALL, "Ru");
	string s = "Результат: ";
    int a, b, n,choose=0;
    cout << "1. Сумма от 1 до 100\n2. Сумма нечетных чисел до N\n3. Факториал N\n4. Поик элемента массива\n5. Написать Функцию для нахождение НОД."<<endl;
    cin >> choose;
    switch (choose)
    {
	case 1:
		cout <<s<< Sum();
		break;
	case 2:
		cin >> n;
		cout <<s<< SumN(n);
		break;
	case 3:
		cin >> n;
		cout << s<<Factorial(n);
		break;
	case 4:
		FoundElement();
		break;
    case 5:
        cin >> a >> b;
        cout << s<<NOD(a, b);
		break;
    }
}
