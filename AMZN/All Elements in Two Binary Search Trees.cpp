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

    void extractdata(TreeNode* root, vector <int> &res){
        if(root == nullptr) return;

        extractdata(root->left, res);
        res.push_back(root->val);
        extractdata(root->right, res);
    }

    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector <int> res1;
        vector <int> res2;
        vector <int> finalres;

        // inorder traversal karte hai
        extractdata(root1, res1);
        extractdata(root2, res2);

        for(int i=0; i<res1.size(); ++i){
            finalres.push_back(res1[i]);
        }

        for(int i=0; i<res2.size(); ++i){
            finalres.push_back(res2[i]);
        }

        sort(finalres.begin(), finalres.end());

        return finalres;
    }
};
