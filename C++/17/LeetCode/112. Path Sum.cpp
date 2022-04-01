const int ZERO = []() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	return 0;
}();

class Solution{
public:
	bool hasPathSum(TreeNode* root, int targetSum) {
		if (root == nullptr) {
			return false;
		}
		if (root->left == nullptr && root->right == nullptr) {
			return root->val == targetSum;
		}
		else {
			return hasPathSum(root->left, targetSum - root->val) || hasPathSum(root->right, targetSum - root->val);
		}
	}
};