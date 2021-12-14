class Solution {
public:
    bool isValid(const string &s) {
        stack<char, vector<char>> st;
        for (auto i : s) {
            if (i == '(') {
                st.emplace(')');
            }
            else if (i == '[') {
                st.emplace(']');
            }
            else if (i == '{') {
                st.emplace('}');
            }
            else {
                if (st.empty() || st.top() != i) {
                    return false;
                }
                st.pop(); 
            }

        }
        return st.empty();
    }
};
