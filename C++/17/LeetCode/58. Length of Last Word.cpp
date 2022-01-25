class Solution {
public:
    int lengthOfLastWord(const std::string& s) {
        int high = s.size() - 1, low;
        while (high >= 0 && s[high] == ' ') {
            high--;
            low = high;
        }

        while (low >= 0 && s[low] != ' ') {
            low--;
        }

        return high - low;
    }
};
