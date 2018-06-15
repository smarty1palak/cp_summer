int Solution::gcd(int A, int B) {
    while(A!=0)
    {
        int t=A;
        A=B%A;
        B=t;
    }
    return B;
}
