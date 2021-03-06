class Solution {
public:
    string longestCommonPrefix(const std::vector<std::string>& strs) {
        if (strs.size() == 0) {
            return "";
        }
        std::string prefix = strs[0];

        for (int i = 1; i < strs.size(); ++i) {
            std::string s = strs[i];
            if (s.size() == 0 || prefix == "") {
                return "";
            }
            prefix = prefix.substr(0, min(prefix.size(), s.size()));

            for (int j = 0; j < s.size() && j < prefix.size(); ++j) {
                if (s[j] != prefix[j]) {
                    prefix = prefix.substr(0, j);
                    break;
                }
            }
        }
        return prefix;
    }
};
