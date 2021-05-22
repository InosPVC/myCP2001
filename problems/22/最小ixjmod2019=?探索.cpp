#include<bits/stdc++.h>
using namespace std;
#define int long
main(){
  int l,r,m=2018;
  cin>>l>>r;
  if(r-l>2017){cout<<0;return 0;}
  for(int i=l;i<r;++i)for(int j=l+1;j<=r;++j)m=min(m,(i*j)%2019);
  cout<<m;
}
