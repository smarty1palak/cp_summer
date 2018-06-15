int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int sum=0;
    for(int i=0;i<A.size()-1;i++)
    {
        int x=abs(A[i+1]-A[i]);
        int y=abs(B[i+1]-B[i]);
        int t=x>y?x:y;
        sum=sum+t;
    }
    return sum;
}
