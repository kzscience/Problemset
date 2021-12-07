class Solution {
    unordered_map<char, int> romanToValue{
     {'I', 1},
     {'V', 5},
     {'X', 10},
     {'L', 50},
     {'C', 100},
     {'D', 500},
     {'M', 1000}
    };

public:
    int romanToInt(string_view str) {
        int answer = 0,previous = INT_MAX;
        for (char c : str) {
            int value = romanToValue[c];
            if (value <= previous) {
                answer += value;
            }
            else {
                answer += value;
                answer -= 2 * previous;
            }
            previous = value;
        }
        return answer;
    }

};
