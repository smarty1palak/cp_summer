/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::postorderTraversal(TreeNode* A) {
    struct TreeNode *temp=A;
    stack<struct TreeNode*>s;
    vector<int>sol;
    s.push(A);
    while(!s.empty())
    {
        struct TreeNode *temp=s.top();
        sol.push_back(temp->val);
        s.pop();
        if(temp->left!=NULL)
         s.push(temp->left);
        if(temp->right!=NULL)
         s.push(temp->right);
    }
    reverse(sol.begin(),sol.end());
    return sol;
}
