class Solution {
public:
    int maxSubArray(const std::vector<int>& nums) {
        int current = nums[0],
            max = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            current = std::max(current + nums[i], nums[i]);
            max = std::max(max, current); 
        }
        return max;
    }
};
