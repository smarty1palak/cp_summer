vector<int> Solution::maxone(vector<int> &A, int B) {
   int x=0,y=0,maxi=INT_MIN,count=0,start=0,end=0;
   vector<int>v;
   while(y<A.size())
   {
       if(A[y]==0)
       {
           count++;
       }
       if(count>B)
       {
           if((y-x)>maxi)
           {
               maxi=y-x;
               start=x;
               end=y;
           }
           while(A[x]!=0)
           {
               x++;
           }
           x++;
           count=B;
       }
       y++;
   }
   if((y-x)>maxi)
           {
               maxi=y-x;
               start=x;
               end=y;
           }
   for(int i=start;i<end;i++)
    v.push_back(i);
   return v;
}
