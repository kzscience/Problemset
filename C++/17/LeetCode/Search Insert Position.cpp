class Solution {
public:
	int searchInsert(std::vector<int>& nums, int &target) {
		int i;
		for (i = 0; i < nums.size(); i++) {
			if (target == nums[i] || target < nums[i]) {
				return i;
			}
		}
		return i;
	}

};
