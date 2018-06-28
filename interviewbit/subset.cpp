void subset( vector<int>&A, int i, vector<int>&li, vector<vector<int> > &v )
{
    for(int j=i;j<A.size();j++)
    {
        li.push_back(A[j]);
        v.push_back(li);
        subset(A,j+1,li,v);
        li.pop_back();
    }
    return ;
}

vector<vector<int> > Solution::subsets(vector<int> &A) {
    sort(A.begin(), A.end());
    vector<int> li;
    vector<vector<int> > v;
    v.push_back(li);
    subset(A,0,li,v);
    return v;
}