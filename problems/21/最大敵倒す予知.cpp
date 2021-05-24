#include <iostream>
using namespace std;
 //2
//3 5 2
//4 5

int n;
long a[100010], b, c, t;
 
int main(){
	cin >> n;
	for (int i = 0; i < n+1; ++i) cin >> a[i];
	c = 0;
	for (int i = 0; i < n; ++i){
		cin >> b;
		t = min(b, a[i] + a[i+1]); // min(4,3+5)
		c += t; // c= 4 
		a[i+1] -= t - min(b, a[i]); // 3 5 2 -> 5 = 4 - min(4,3)
	}
	cout << c;
}
