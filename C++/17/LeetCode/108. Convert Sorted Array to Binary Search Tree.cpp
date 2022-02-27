const int ZERO = []() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	return 0;
}();

class Solution {
	TreeNode* getBST(const std::vector<int>& nums, int left, int right) {
		if (left > right) {
			return nullptr;
		 }
		int middle = (left + right) / 2;
		TreeNode* root = new TreeNode(nums[middle]);
		root->left = getBST(nums, left, middle - 1);
		root->right = getBST(nums, middle+1, right);
		return root;

	}

public:
	TreeNode* sortedArrayToBST(const std::vector<int>& nums) {
		return getBST(nums, 0, (int)nums.size()-1);
	}
};
