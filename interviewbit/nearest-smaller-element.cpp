vector<int> Solution::prevSmaller(vector<int> &A) {
    stack<int>s;
    vector<int>sol;
    for(int i=0;i<A.size();i++)
    {
        while(!s.empty())
        {
            if(s.top()<A[i])
            {
                sol.push_back(s.top());
                break;
            }
            s.pop();
        }
        if(s.empty())
        {
            sol.push_back(-1);
        }
        s.push(A[i]);
    }
    return sol;
}