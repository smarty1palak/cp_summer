int Solution::isPower(int A) {
    if (A == 1) return 1;
    for (int idx = 2; idx * idx <= A; idx ++) {
        double val = log (A)/log (idx);
        if ((val - (int) val) < 0.00000001) return 1;
    }
    return 0;
}
