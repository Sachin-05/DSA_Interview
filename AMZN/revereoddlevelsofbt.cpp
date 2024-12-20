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
    TreeNode* reverseOddLevels(TreeNode* root) {
       if (!root) return nullptr; // If the tree is empty, return nullptr.

        // Queue to facilitate level order traversal.
        queue<TreeNode*> q;
        q.push(root);

        int level = 0; // Start from level 0 (even).

        while (!q.empty()) {
            int size = q.size(); // Number of nodes at the current level.
            vector<TreeNode*> nodes; // Store nodes at the current level.

            for (int i = 0; i < size; ++i) {
                TreeNode* node = q.front();
                q.pop();

                if (node->left) q.push(node->left); // Add left child to the queue.
                if (node->right) q.push(node->right); // Add right child to the queue.

                if (level % 2 == 1) {
                    nodes.push_back(node); // Collect nodes if at an odd level.
                }
            }

            // Reverse values of nodes if on an odd level.
            if (!nodes.empty()) {
                int left = 0, right = nodes.size() - 1;
                while (left < right) {
                    swap(nodes[left]->val, nodes[right]->val);
                    ++left;
                    --right;
                }
            }

            ++level; // Move to the next level.
        }

        return root;
    }
};
