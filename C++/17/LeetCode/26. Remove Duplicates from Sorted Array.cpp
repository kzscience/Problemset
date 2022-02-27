const int ZERO = []() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	return 0;
}();


class Solution {
public:
	int removeDuplicates(std::vector<int>& nums) {
			std::sort(nums.begin(), nums.end());
			auto last = std::unique(nums.begin(), nums.end());
			nums.erase(last, nums.end());
		return nums.size();
    }
};
