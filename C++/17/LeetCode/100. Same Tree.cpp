const int ZERO = []() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	return 0;
}();

class Solution {
public:
	bool isSameTree(TreeNode* p, TreeNode* q) {
		if (p == nullptr && q == nullptr) {
			return true;
		}
		if (p == nullptr || q == nullptr) {
			return false;
		}
		return (p->val == q->val) &&
			isSameTree(p->left, q->left) &&
			isSameTree(p->right, q->right);
	}
};