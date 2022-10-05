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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        
        if (depth == 1) {
            
            TreeNode* new_root = new TreeNode(val);
            new_root->left = root;
            return new_root;
        }
        
        return helper(root, val, depth, 1);
        
    }
    
    TreeNode* helper(TreeNode* root, int val, int depth, int d) {
        
        if (d + 1 == depth) {
            
            TreeNode* lt = new TreeNode(val);
            TreeNode* rt = new TreeNode(val);
                
            lt->left = root->left;
            rt->right = root->right;
            
            root->left = lt;
            root->right = rt;
            
            return root;
        }
        
        if (d + 1 < depth) {
            
            if (root->left != nullptr) {
                
                root->left = helper(root->left, val, depth, d + 1);
            }
            
            if (root->right != nullptr) {
                
                root->right = helper(root->right, val, depth, d + 1);
            }
        }
        
        return root;
    }
};