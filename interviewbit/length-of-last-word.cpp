int Solution::lengthOfLastWord(const string A) {
    int count=0,i;
    if(A.length()==0)
    {
        return 0;
    }
    else
    {
        for(i=0;i<A.length()-1;i++)
        {
            if(A[i]!=' ')
                count++;
            else 
            {
                if(A[i]==' ' &&A[i+1]!=' ')
                    count=0;
            }
        }
        if(A[i]!=' ')
          count++;
        return count;
    }
}