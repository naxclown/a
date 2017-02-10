#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,ans=-1,c=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<n;i++)
	ans=max(ans,a[i]);
	int p=ans+1;
	int b[p];
	for(int i=1;i<p;i++)
	b[i]=0;
	for(int i=0;i<n;i++)
	{
		int index=a[i];
		b[index]++;
	}
	for(int i=1;i<p;i++)
if(b[i]!=0 && b[i]>1)
c++;
cout<<c<<endl;
return 0;
	
}
