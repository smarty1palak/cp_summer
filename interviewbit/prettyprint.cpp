vector<vector<int> > Solution::prettyPrint(int A) {
    vector<vector<int> > v(2*A-1);
    for(int i=0;i<A;i++)
    {
        for(int j=0;j<i;j++)
        {
            v[i].push_back(A-j);
            if(i!=2*A-2-i)
            v[2*A-i-2].push_back(A-j);
        }
        for(int j=i;j<2*A-i-1;j++)
        {
            v[i].push_back(A-i);
            if(i!=2*A-2-i)
            v[2*A-i-2].push_back(A-i);
        }
        for(int j=2*A-i-1;j<2*A-1;j++)
        {
            v[i].push_back(j-A+2);
            if(i!=2*A-2-i)
            v[2*A-i-2].push_back(j-A+2);
        }
        
    }
    return v;
}