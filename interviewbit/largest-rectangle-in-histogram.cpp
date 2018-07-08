int Solution::largestRectangleArea(vector<int> &A) {
    int n=A.size();
    stack<int>s;
    int i=0,area, sol=0;
    while(i<n)
    {
        if(s.empty()||A[s.top()]<=A[i])
        {
            s.push(i++);
        }
        else
        {
            int t=s.top();
            s.pop();
            if(s.empty())
            {
                area=A[t]*i;
            }
            else
            {
                area=A[t]*(i-s.top()-1);
            }
            sol=max(sol,area);
        }
        
    }
    while(!s.empty())
    {
            int t=s.top();
            s.pop();
            if(s.empty())
            {
                area=A[t]*i;
            }
            else
            {
                area=A[t]*(i-s.top()-1);
            }  
        sol=max(sol,area);    
    }
    return sol;
}