#include <iostream>
using namespace std;
 
int n;
long a[100010], b, c, t;
 
int main(){
	cin >> n;
	for (int i = 0; i < n+1; ++i) cin >> a[i];
	c = 0;
	for (int i = 0; i < n; ++i){
		cin >> b;
		t = min(b, a[i] + a[i+1]);
		c += t;
		a[i+1] -= t - min(b, a[i]);
	}
	cout << c;
}
