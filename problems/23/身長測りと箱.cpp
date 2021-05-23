// 2cm 1cm 1cm  -> 2 1+1 1+1 
// 1+1 cm = 2操作
// cout  = 2操作
int ans = 0; 
	int maxnum = 0; 
	for (int i = 0; i < (n); i++) {
		maxnum = max(maxnum, a[i]); 
		int b = maxnum; 
		ans += b - a[i]; 
		
	}
