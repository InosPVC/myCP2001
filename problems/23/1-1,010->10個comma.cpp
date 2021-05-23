#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,sum=0;
	cin>>n;
	for(long long i=999;i<=n;)
	{
		sum+=n-i;
		i=i*1000+999;
	}
	cout<<sum;
 } 


