int search(vector<int>&in, int key, int start, int end)
{
    for(int i=start;i<=end;i++)
    {
        if(in[i]==key)
         return i;
    }
}
struct TreeNode* build(vector<int>&in, vector<int>&po, int start, int end, int& index)
{
    if(start>end)
     return NULL;
    struct TreeNode* temp= new struct TreeNode(po[index++]);
    if(start==end)
     return temp;
    int pos= search(in,temp->val, start, end);
    temp->left=build(in,po,start,pos-1,index);
    temp->right=build(in,po,pos+1,end,index);
    return temp;
}
TreeNode* Solution::buildTree(vector<int> &A, vector<int> &B) {
    int n=A.size();
    int index=0;
    if(A.empty())
     return NULL;
    return build(B,A,0,n-1,index);
}