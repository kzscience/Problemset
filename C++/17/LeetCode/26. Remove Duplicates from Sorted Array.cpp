class Solution {
public:
	int removeDuplicates(std::vector<int>& nums) {
			std::sort(nums.begin(), nums.end());
			auto last = std::unique(nums.begin(), nums.end());
			nums.erase(last, nums.end());
		return nums.size();
    }
};
