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

    bool B(TreeNode* Node,long min,long max){
        if(Node==NULL)return true;
        if(Node->val>=max || Node->val<=min)return false;

        return B(Node->left,min,Node->val) && B(Node->right,Node->val,max);
    }
    bool isValidBST(TreeNode* root) {
        long min=LLONG_MIN;
        long max=LLONG_MAX;
        return B(root,min,max);
    }
};