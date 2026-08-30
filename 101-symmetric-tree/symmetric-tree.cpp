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

    bool isS(TreeNode* Node1,TreeNode* Node2){
        if(Node1==NULL || Node2==NULL) return Node1==Node2;

        if(Node1->val!=Node2->val)return false;

        return isS(Node1->left,Node2->right) && isS(Node1->right,Node2->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)return true;
        return isS(root->left,root->right);
    }
};