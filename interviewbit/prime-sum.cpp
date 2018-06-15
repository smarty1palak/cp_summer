vector<int> Solution::primesum(int A) {
    vector<int>v;
    vector<bool>prime;
    for(long long i=0;i<A;i++)
     prime.push_back(true);
    for (long long p=2; p*p<=A; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p
            for (long long i=p*2; i<=A; i += p)
                prime[i] = false;
        }
    }
    for (long long p=2; p<=A; p++)
       if (prime[p])
         if(prime[A-p])
         {
             v.push_back(min(p,A-p));
             v.push_back(max(p,A-p));
             break;
         }
    return v;      
}