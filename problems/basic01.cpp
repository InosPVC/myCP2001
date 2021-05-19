
sort(arr, arr + n, greater<int>()); // descending order 
// base detector  

bool f(int n,int p){return n?n%p==7|f(n/p,p):false;} // what integer, what base
int n,cnt=0;
	cin>>n;
	for(int i=1;i<=n;i++)cnt+=!f(i,8)&&!f(i,10);
	cout<<cnt<<endl;
