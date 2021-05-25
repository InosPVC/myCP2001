// 三角形を　形成する異なる3つの辺がいくつある？
int a[103], n, ans = 0;
	sort(a, a + n);
	for (int i = 0; i < n; i++)for (int j = i + 1; j < n; j++)for (int k = j + 1; k < n; k++) // i // i+1 // j+1
		if (a[i] != a[j] && a[j] != a[k] && a[i] + a[j] > a[k]) ans++; // i!= j // j != k // i+j > k 
 
 
