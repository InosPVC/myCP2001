#include<bits/stdc++.h>
using namespace std;
int i,j,a,b,c,k,d,n,x[10][10];
int main()
{
  for(cin>>n>>d;i<n;i++)for(j=0;j<d;j++)cin>>x[i][j];
  for(i=0;i<n-1;i++){
    for(k=1;k<n-i;k++){
      for(a=0,j=0;j<d;j++)a+=pow(x[i][j]-x[i+k][j],2);
      b=sqrt(a);if(pow(b,2)==a)c++; // if isint -> count 
    }
  }
  cout<<c;
}
