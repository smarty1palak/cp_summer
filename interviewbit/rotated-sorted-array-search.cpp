int Solution::search(const vector<int> &A, int B) {
    int l=0, r=A.size()-1, mid,t=-1;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(A[mid]>A[mid+1]&&(mid+1)<A.size())
        {
            t=mid;
            break;
        }
        else if(A[mid]>A[0])
        {
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
  
    if(t==-1)
    {
        l=0, r=A.size()-1;
        while(l<r)
        {
            mid=(l+r)/2;
            if(A[mid]==B)
                return mid;
            else if(A[mid]>B)
                r=mid-1;
            else
                l=mid+1;
        }
        return -1;
    }
   else
   {
       l=0,r=t;
       while(l<=r)
        {
            mid=(l+r)/2;
            if(A[mid]==B)
                return mid;
            else if(A[mid]>B)
                r=mid-1;
            else
                l=mid+1;
        }
        l=t+1, r=A.size()-1;
        while(l<=r)
            {
            mid=(l+r)/2;
            if(A[mid]==B)
                return mid;
            else if(A[mid]>B)
                r=mid-1;
            else
                l=mid+1;
        }
        return -1;
   }
}