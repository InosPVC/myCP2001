#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
int n;
double x[10], y[10], ans;
int main(){
	scanf("%d", &n);
	rep(i,n){
		scanf("%lf%lf", x+i, y+i);
		rep(j,i) ans += hypot(x[i]-x[j],y[i]-y[j])/n*2;
	}
	
