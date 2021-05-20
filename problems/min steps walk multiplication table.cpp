#include <bits/stdc++.h>
using namespace std;
long long n,i,x;
int main(){ // start 1,1 
  for(cin>>n,i=1;i*i<=n;i++)if(n%i==0)x=i; // target destination row2xcolumn5 = 10
  cout<<x-1+(n/x)-1;// min = 5 steps 
}
