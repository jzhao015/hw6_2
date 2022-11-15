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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
//if the root is null, then create a new tree node with the value we want to insert and return it. 
    if (root == nullptr) 
      return new TreeNode(val);
//if the node's value is greater than the val, it should be inserted to the left subtree by using recursion
    if (root->val > val)
      root->left = insertIntoBST(root->left, val);
//else the val should be inserted to the right subtree    
    else
      root->right = insertIntoBST(root->right, val);
    return root; // return the root after insertion 
    }
};
