#include<bits/stdc++.h>
#include<math.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#include <cmath>

int main()
{
	// 6
	// 123 223 123 523 200 2000

	int n; cin >> n; vector<int>a(n); 
	rep(i, n){
		cin >> a[i]; 
	}
	long long ans = 0; 
	vector<int>amari(202);
	rep(i, n) {
		int r = a[i] % 200; //123 % 200 = 123 ; 
		ans += amari[r]; // ans = 0 + amari [0,0,0,0 ,0]
		amari[r]++; // index 123 amari[123] -> [0,0,0,1,0] 123 番目に1を足す

	}
	cout << ans; 
}
