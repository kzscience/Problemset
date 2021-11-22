// Перевести число из десятичной в двоичная систему
#include <iostream> 
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int n, m = 0, x=1;
    cin >> n;
    cout <<"Десятичная система: "<< n;
    while (n) {
        m += (n % 2)*x;
        n /= 2;
        x = x * 10;
    }

    cout <<"\nДвоичная система: "<< m;
    return 0;
}
