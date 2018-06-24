long long  power(int x, int n, int d)
{
    if(n==0 && x!=0)
      return 1;
    if(n==1 || x==0)
      return x%d;
    if(n%2==0)
    {
        return ((power(x,n/2,d)%d)*(power(x,n/2,d)%d)%d);
    }
    else if(n%2==1)
    {
        return ((((x%d)*(power(x,(n-1)/2,d)%d))%d)*(power(x,(n-1)/2,d)%d))%d;
    }
}



int Solution::pow(int x, int n, int d) {
    long long answer;
    answer=power(x,n,d);
    if(answer>=0)
     return answer%d;
   else
     return (answer+d)%d;
}