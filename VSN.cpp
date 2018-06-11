#include<bits/stdc++.h>
using namespace std;


int main()
{
	long long t1;
	double small=pow(10,-9);
	cin>>t1;
	while(t1--)
	{
			long long pi,pj,pk,qi,qj,qk,di,dj,dk,ci,cj,ck,r;
			cin>>pi>>pj>>pk>>qi>>qj>>qk>>di>>dj>>dk>>ci>>cj>>ck>>r;
						double l=0.0, h= 1e15;
						double mid,answer;
						while(l<h-small)
							{
								mid = (l + h)/2;
								double qti=qi+mid*di;
								double qtj=qj+mid*dj;
								double qtk=qk+mid*dk;
								double pqi=qti-pi, pqj=qtj-pj, pqk=qtk-pk;
								double pci=pi-ci, pcj=pj-cj, pck=pk-ck;
								double crossi=pqj*pck-pqk*pcj, crossj=pqk*pci-pqi*pck, crossk=pqi*pcj-pqj*pci;
								double cross=sqrt(crossi*crossi+crossj*crossj+crossk*crossk);
								double pqt=sqrt(pqi*pqi+pqj*pqj+pqk*pqk);
								double rnew=cross/pqt;
								if (r*1.0>rnew)  
            					{
            						l=mid+small;
            					}
        						else 
        						{
        							answer=mid;
        							h=mid-small;
        						}
							}
						printf("%0.9lf\n",answer);
	}
}
