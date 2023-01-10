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

    vector<string> tree1;
    vector<string> tree2;

    bool isSameTree(TreeNode* p, TreeNode* q) {

        helper1(p);
        helper2(q);

        if (tree1.size() != tree2.size()) {
            return false;
        }

        for (int i = 0; i < tree1.size(); i++) {
            if (tree1[i] != tree2[i]) {
                return false;
            }
        }
        
        return true;
    }

    void helper1(TreeNode* node) {

        if (node) {

            tree1.push_back(to_string(node->val));

            if (node->left) {

                helper1(node->left);
            }

            else {

                tree1.push_back("null");
            }

            if (node->right) {

                helper1(node->right);
            }

            else {

                tree1.push_back("null");
            }
        }
    }

    void helper2(TreeNode* node) {

        if (node) {

            tree2.push_back(to_string(node->val));

            if (node->left) {

                helper2(node->left);
            }

            else {

                tree2.push_back("null");
            }

            if (node->right) {

                helper2(node->right);
            }

            else {

                tree2.push_back("null");
            }
        }
    }
};