unsigned int Solution::reverse(unsigned int A) {
    unsigned int size=sizeof(A)*8;
    unsigned int reverse=0,i;
    for(i=0;i<size;i++)
    {
        if(A&(1<<i))
        {
            reverse|=(1<<(size-i-1));
        }
    }
   return reverse;
}
