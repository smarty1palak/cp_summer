/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::preorderTraversal(TreeNode* A) {
    stack<struct TreeNode *>s;
    vector<int>sol;
    s.push(A);
    while(!s.empty())
    {
        struct TreeNode *temp=s.top();
        sol.push_back(temp->val);
        s.pop();
        if(temp->right!=NULL)
         s.push(temp->right);
        if(temp->left!=NULL)
         s.push(temp->left);
    }
    return sol;
}
