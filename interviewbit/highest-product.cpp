int Solution::maxp3(vector<int> &A) {
    sort(A.begin(),A.end());
    int neg1= A[0], neg2=A[1];
    int mul=A[0]*A[1];
    reverse(A.begin(), A.end());
    int pos1=A[0], pos2=A[1], pos3=A[2];
    return max(mul*A[0], A[0]*A[1]*A[2]);
    
}
