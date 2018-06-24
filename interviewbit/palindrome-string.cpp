int Solution::isPalindrome(string A) {
    vector<char>s1;
    for(int i=0; i<A.length();i++)
    {
        if((A[i]>=65 && A[i]<=90) || (A[i]>=97 && A[i]<=122) || (A[i]>=48 && A[i]<=57))
        {
            if(A[i]>=65&& A[i]<=90)
            {
                A[i]=A[i]+32;
            }
            s1.push_back(A[i]);
        }
    }
    for(int i=0;i<s1.size()/2;i++)
    {
        if(s1[i]==s1[s1.size()-1-i])
         continue;
        else
        {
            return 0;
        }
    }
    return 1;
    
}