// Сделать сдвиг по алфавиту s - слово n - количество сдвигов (+ вперед / - назад).
#include <iostream> 
#include <Windows.h>
using namespace std;

unsigned char MyToLower(unsigned char c)  // так как обычный tolower не поддерживает русский язык, пришлось создать собственный
{
    if ((c >= 192 && c <= 223)) {
        c = c + 32;
    }
       
    else if (c == 168) {
        c = c + 16; 
    }
    return c;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int n, m;
    string s, a = "абвгдеёжзийклмнопрстуфхцчшщъыьэюя";

    cin >> s >> n;

    for (int i = 0; i < s.size(); i++) {
        m = a.find(MyToLower(s[i]));
        if (n + m > 32 && n > 0) {
            cout << a[(n + m - 1) - 32];
        }
        else if (n + m < 0 && n < 0) {
            cout << a[32 + 1 - (((-1) * n) - m)];
        }
        else {
            cout << a[m + n];
        }


    }

    return 0;
}
