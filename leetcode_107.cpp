/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> result;
        
        if (root == nullptr) return result;

        queue<TreeNode*> queue;
        queue.push(root);

        while (!queue.empty()) {
            int size = queue.size();
            vector<int> level;

            for (int i = 0; i < size; i++) {
                TreeNode* node = queue.front();
                queue.pop();
                level.push_back(node->val);

                if (node->left != nullptr) queue.push(node->left);
                if (node->right != nullptr) queue.push(node->right);
            }

            // Add the current level at the beginning of the result
            result.insert(result.begin(), level);
        }

        return result;
    }
};
