class Solution {
public:
    bool isPalindrome(const int number) {
        int reverse = 0;
        for (int i = number; i > 0; i /= 10) {
            reverse = reverse * 10 + i % 10;
        }

        return (number == reverse);
    }
};
