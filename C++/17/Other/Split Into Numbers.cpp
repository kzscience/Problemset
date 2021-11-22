#include <iostream>
#include <stack>
using namespace std;
int main()
{
    int number;

    cin >> number;

    stack<int> sd;

    while (number)
    {
        int digit = number % 10;
        number /= 10;
        sd.push(digit);
    }

    while (!sd.empty())
    {
        int digit = sd.top();
        cout << sd.top() << endl;
        sd.pop();
    }

}
