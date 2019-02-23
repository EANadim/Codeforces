#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,n,k,a[200],b[200],flag=0;
	cin>>n>>k;
	for(i=0;i<n;i++)
		cin>>a[i];
	for(j=0;j<k;j++)
		cin>>b[j];
	j=k-1;
	sort(b,b+k);
	for(i=0;i<n;i++)
	{
		if(a[i]==0)
		{
			a[i]=b[j];
			j--;
		}
	}
	for(i=0;i<(n-1);i++)
	{
		if(a[i]>=a[i+1])
			flag=1;
	}
	if(flag==1)
		cout<<"Yes";
	else if(flag==0)
		cout<<"No";
	return 0;
}
