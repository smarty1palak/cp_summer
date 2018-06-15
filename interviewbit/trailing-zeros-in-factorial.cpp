int Solution::trailingZeroes(int A) {
    int sum=0,x=1,count=0,t=2;
    while(5*x<=A)
    {
        count++;
        int t=x;
        while(t>1)
        {
            if(t%5==0)
            {
                t=t/5;
                count++;
            }
            else
            {
                break;
            }
        }
        x++;
    }
    return count;
}