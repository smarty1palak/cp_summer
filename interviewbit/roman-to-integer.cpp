int chari(char x)
{
    if(x=='I')
     return 1;
    else if(x=='V')
     return 5;
    else if(x=='X')
     return 10;
    else if(x=='L')
     return 50;
    else if(x=='C')
     return 100;
    else if(x=='D')
     return 500;
    else
     return 1000;
}
int Solution::romanToInt(string A) {
    int sum=0,count=0;
    int start=A[0];
    for(int i=1;i<A.length();i++)
    {
        if(chari(A[i])<=chari(start))
        {
            sum+=chari(start);
            start=A[i];
        }
        else
        {
            sum+=-chari(start);
            start=A[i];
        }
    }
   sum+=chari(A[A.length()-1]);
   return sum;
}