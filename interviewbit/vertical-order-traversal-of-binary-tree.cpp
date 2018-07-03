void find1(int* min, int* max, struct TreeNode *root, int current)
{
    if(root==NULL)
     return ;
    else if(current < *min)
    {
        *min=current;
    }
    else if(current > *max)
    {
        *max=current;
    }
    find1(min, max, root->left, current-1);
    find1(min, max, root->right,current+1 );
    return;
}

void makematrix(int min, vector<vector<int> >&v, struct TreeNode *root)
{
    if(root==NULL)
     return;
    struct TreeNode *node;
    int line=0;
    queue< pair<struct TreeNode*, int> >q;
    q.push(make_pair(root,0));
    while(!q.empty())
    {
        pair<struct TreeNode*,int>temp=q.front();
        q.pop();
        line=temp.second;
        node=temp.first;
        v[line-min].push_back(node->val);
        if(node->left!=NULL)
        q.push(make_pair(node->left,line-1));
        if(node->right!=NULL)
        q.push(make_pair(node->right,line+1));
    }
}
vector<vector<int> > Solution::verticalOrderTraversal(TreeNode* A) {
    int min=0,max=0, j=0;
    if(A==0)
    {
        vector<vector<int> >v;
        return v;
    }
    find1(&min,&max,A,j);
    vector<vector<int> >v(abs(min)+max+1);
    makematrix(min, v,A);
    return v;
}
