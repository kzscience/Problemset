class Solution {
private:
	bool isSymmetric(TreeNode* left, TreeNode* right) {
		if (left == nullptr && right == nullptr) {
			return true;
		} 
		if (left == nullptr || right == nullptr) {
			return false;
		}

		return right->val == left->val 
			&& isSymmetric(left->left, right->right) 
			&& isSymmetric(left->right, right->left);
	}

public:
	bool isSymmetric(TreeNode* root) {
		if (root == nullptr) {
			return true;
		}
		return isSymmetric(root->left, root->right);
		
	}
};