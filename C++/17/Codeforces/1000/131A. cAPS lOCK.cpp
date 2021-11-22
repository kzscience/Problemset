#include <iostream>

int main()
{
    std::string s;
    std::cin >> s;
    int i, count = 0;
    for (i = 0; i < s.size(); i++) {
        if (s[i] == tolower(s[i])) {
            count++;
        }
    }
    if (count == 0) {
        for (i = 0; i < s.size(); i++) {
            s[i] = tolower(s[i]);
        }   
        std::cout << s << std::endl;
    }
    else if (count == 1 && s[0] == tolower(s[0])) {
        s[0] = toupper(s[0]);
        for (i = 1; i < s.size(); i++) {
            s[i] = tolower(s[i]);
        }
        std::cout << s << std::endl;
    }
    else {
        std::cout << s << std::endl;
    }
}
