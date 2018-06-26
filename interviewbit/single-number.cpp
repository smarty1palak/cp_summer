int Solution::singleNumber(const vector<int> &A) {
    int xo=0;
    for(int i=0;i<A.size();i++)
    {
        xo=xo^A[i];
    }
    return xo;
}