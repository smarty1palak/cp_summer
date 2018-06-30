int Solution::braces(string A) {
    stack<char>s;
    for(int i=0;i<A.length();i++)
    {
        if(A[i]==')' && s.top()=='(')
        {
            return 1;
        }
        else if(A[i]==')')
        {
            char t=s.top();
            s.pop();
            if(s.top()=='(')
             return 1;
            else
             s.push(t);
        }
        if(A[i]==')')
        {
            while(s.top()!='(')
            {
                s.pop();
            }
            s.pop();
        }
        else
         s.push(A[i]);
    }
    return 0;
}