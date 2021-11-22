#include <iostream>
 
using namespace std;
 
 
int main()
{
    string s;
    cin >> s;
    bool upper = false, lower = false, digit = false;
    for (int i = 0; i < s.size(); ++i) {
        if (isupper(s[i])) {
            upper = true;
        }
        else if (islower(s[i])) {
            lower = true;
        } 
        else if (isdigit(s[i])) {
            digit = true;
        }
    }
    puts((upper && lower && digit && s.size() >= 5) ? "Correct" : "Too weak");
 
	return  0;
}
