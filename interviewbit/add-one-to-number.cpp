vector<int> Solution::plusOne(vector<int> &A) {
    int i;
    int n=A.size();
    vector<int>B;
    stack<long long>v;
    stack<long long>v1;
    for(i=0;i<n;i++)
    {
       v.push(A[i]);
    }
    int first=0;
    while(!v.empty())
    {
        
        long long x=v.top();
        if(!first)
        {
            x++;
            first=1;
        }
        if(x==10)
        {
            v1.push(0);
            first=0;
        }
        else
        {
            v1.push(x);
        }
        v.pop();
    }
    if(v1.top()==0&&A[0]!=0)
    {
        v1.push(1);
    }
    int initial=0;
    while(!v1.empty())
    {
        if(v1.top()==0 &initial==0)
        {
            v1.pop();
        }
        else
        {
            initial=1;
            B.push_back(v1.top());
            v1.pop();
        }
        
    }