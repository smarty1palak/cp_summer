bool operand(string x)
{
    if(x=="+"||x=="-"||x=="*"||x=="/")
     return true;
    else
     return false;
}
int eval(int a, int b, string c)
 {
     if(c=="+")
     {
         return a+b;
     }
     else if (c=="-")
     {
         return b-a;
     }
     else if(c=="*")
     {
         return a*b;
     }
     else if(c=="/")
     {
         return b/a;
     }
 }
int Solution::evalRPN(vector<string> &A) {
    stack<int>s;
    int first, second;
    for(int i=0;i<A.size();i++)
    {
        if(operand(A[i]))
        {
            first=s.top();
            s.pop();
            second=s.top();
            s.pop();
            s.push(eval(first,second,A[i]));
            
        }
        else
        {
            s.push(atoi(A[i].c_str()));
        }
    }
    return s.top();
}
