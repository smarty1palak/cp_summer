int Solution::canCompleteCircuit(const vector<int> &A, const vector<int> &B) {
   int start=0, end=1;
   int gas=A[start]-B[start];
   while(end!=start || gas<0)
   {
       while(gas<0 && start!=end)
       {
           gas=gas-A[start]+B[start];
           start=(start+1)%A.size();
           if(start==0)
            return -1;
       }
       gas+=A[end]-B[end];
       end=(end+1)%A.size();
       
   }
   return start;
}