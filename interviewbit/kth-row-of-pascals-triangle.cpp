vector<int> Solution::getRow(int A) {
    vector<int>v;
    long long fact=1,i,j,k;
    for(i=2;i<=A;i++)
    {
        fact=fact*i;
    }
    v.push_back(1);
    for(i=1;i<A;i++)
    {
        long long a=1, b=1;
        for(j=2;j<=i;j++)
         a=a*j;
        for(k=2;k<=A-i;k++)
         b=b*k;
        v.push_back(fact/(a*b));
    }
    if(A!=0)
    v.push_back(1);
    return v;
}