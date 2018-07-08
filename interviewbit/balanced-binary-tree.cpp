int height(struct TreeNode* temp)
{
    if(temp==NULL)
     return 0;
    else
     return 1+max(height(temp->left), height(temp->right));
}
int Solution::isBalanced(TreeNode* A) {
    if(A==NULL)
     return 1;
    int l=height(A->left);
    int r=height(A->right);
    if(abs(l-r)<=1 && isBalanced(A->left) && isBalanced(A->right))
     return 1;
    else
     return 0;
}