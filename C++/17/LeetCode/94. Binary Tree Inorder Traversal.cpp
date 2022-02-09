class Solution {
    void inorderTraversal(TreeNode* node, std::vector<int>& ans) {
        if (node == nullptr) {
            return;
        }
        inorderTraversal(node->left, ans);
        ans.push_back(node->val);
        inorderTraversal(node->right, ans);

    }

public:
    std::vector<int> inorderTraversal(TreeNode* root) {
        std::vector<int> ans;
        inorderTraversal(root, ans);
        return ans;
    }
        
};