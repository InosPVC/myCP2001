// chmin
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
 
https://blog.hamayanhamayan.com/entry/2019/01/08/225228

//all  dp[i] = inf;
// dp[0] = 0;
//// chmin ai+1	,ai + hi - hi+1
// chmin ai+2	,ai + hi - hi+2

// cout dp[N - 1] //last dp value
#include<bits/stdc++.h>
using namespace std;
int a[100087],dp[100087];
int main()
{int n;cin>>n;for(int i=0;i<n;i++)cin>>a[i];dp[0]=0;
for(int i=1;i<n;i++)
{dp[i]=dp[i-1]+abs(a[i]-a[i-1]);
if(i>1)
 dp[i]=min(dp[i],dp[i-2]+abs(a[i]-a[i-2]));
}cout<<dp[n-1];}
