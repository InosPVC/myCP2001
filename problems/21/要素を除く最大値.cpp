#include <bits/stdc++.h>
using namespace std;
int n,a[234567],A[234567];
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		A[i]=a[i];
	}
	sort(a,a+n);
	for(int i=0;i<n;i++){
		if(A[i]!=a[(n-1)])cout<<a[(n-1)]<<endl; // 要素が最大でなければ　→　最大出力
		else cout<<a[(n-2)]<<endl;//要素が最大　→　2番目最大要素出力
	}
}
