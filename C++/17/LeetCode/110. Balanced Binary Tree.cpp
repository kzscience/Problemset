class Solution {
	int getHeight(TreeNode* node) {
		if (node == nullptr) {
			return 0;
		}

		int leftHeight = getHeight(node->left);
		if (leftHeight == -1) {
			return -1;
		}
		int rightHeight = getHeight(node->right);
		if (rightHeight == -1) {
			return -1;
		}
		if (std::abs(leftHeight - rightHeight) > 1) {
			return -1;
		}
		else {
			return std::max(leftHeight, rightHeight) + 1;
		}

	}


public:
	bool isBalanced(TreeNode* root) {
		return getHeight(root) != -1;
	}
};