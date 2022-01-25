class Solution {
public:
    bool isPalindrome(const int number) {
        int reverse = 0;
        for (int i = number; i > 0; i /= 10) {
            if (reverse < INT_MAX / 10 || (reverse == INT_MAX / 10 && i / 10 <= INT_MAX % 10)) {
                reverse = reverse * 10 + i % 10;
            }
            else {
                return false;
            }
            
        }

        return (number == reverse);
    }
};
