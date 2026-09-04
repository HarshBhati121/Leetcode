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

    void func(TreeNode* Node,int &cnt,vector<int>&arr,int k){
        if(Node==NULL)return;
        
        func(Node->left,cnt,arr,k);
        arr.push_back(Node->val);
        cnt++;
        if(cnt==k)return;
        func(Node->right,cnt,arr,k);
        
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int>ans;
        int cnt=0;

        func(root,cnt,ans,k);
        return ans[k-1];
    }
};