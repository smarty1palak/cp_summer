int Solution::threeSumClosest(vector<int> &A, int B) {
    sort(A.begin(), A.end());
    int mini=INT_MAX, first,a,b,c;
    for(int i=0;i<A.size();i++)
    {
        first=A[i];
        int l=i+1, r=A.size()-1;
        while(l<r)
        {
            int value=abs(B-first-A[l]-A[r]);
            if(abs(value)<abs(mini))
            {
                mini=value;
                a=first;
                b=A[l];
                c=A[r];
            }
            if(first+A[l]+A[r]==B)
            {
                return B;
            }
            else if(first+A[l]+A[r]>B)
            {
                r--;
            }
            else
            {
                l++;
            }
        }
    }
    return a+b+c;
}