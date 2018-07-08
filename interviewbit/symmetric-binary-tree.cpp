int mirror(struct TreeNode * A, struct TreeNode * B)
{
    if(A==NULL && B==NULL)
     return 1;
    if(A->left==NULL && B->right!=NULL)
     return 0;
    if(A->right==NULL && B->left!=NULL)
     return 0;
    else 
    {
        if(A->val==B->val && mirror(A->left, B->right) && mirror(A->right, B->left))
         return 1;
        return 0;
    }
}
int Solution::isSymmetric(TreeNode* A) {
    if(mirror(A,A))
     return 1;
    else
     return 0;
    
}
