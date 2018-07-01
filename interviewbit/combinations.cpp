void backtrack(vector<vector<int> >&sub,vector<int> &v1, int start, int A, int B)
{
    if(B==0)
    {
     sub.push_back(v1);
     return;
    }
    for(int i=start;i<A;i++)
    {
        v1.push_back(i+1);
        backtrack(sub,v1,i+1,A,B-1);
        v1.pop_back();
    }
    return;
}




vector<vector<int> > Solution::combine(int A, int B) {
    vector<vector<int>> sub;
    vector<int>v1;
    backtrack(sub,v1,0,A,B);
    return sub;
}