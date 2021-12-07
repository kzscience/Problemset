class Solution {
public:
    vector<int> twoSum(const vector<int>& nums, int target) {
        unordered_map<int, int> valueToIndex;
        for (int i = 0; i < (int)nums.size(); i++) {
            auto it = valueToIndex.find(target - nums[i]);
            if (it != valueToIndex.end()) {
                return { it->second, i };
            }
            valueToIndex[nums[i]] = i;
        }
        throw invalid_argument("sum not found");
    }
};
