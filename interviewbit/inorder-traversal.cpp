vector<int> Solution::inorderTraversal(TreeNode* A) {
    vector<int>v;
    int complete=0;
    struct TreeNode *temp=A;
    stack<struct TreeNode *>q;
    while(!complete)
    {
        if(temp!=NULL)
        {
            q.push(temp);
            temp=temp->left;
        }
        else
        {
            if(!q.empty())
            {
                temp=q.top();
                q.pop();
                v.push_back(temp->val);
                temp=temp->right;
            }
            else
            {
                complete=1;
            }
            
        }
    }
    return v;
}