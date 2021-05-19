
sort(arr, arr + n, greater<int>()); // descending order 

// base detector  
bool f(int n,int p){return n?n%p==7|f(n/p,p):false;} // what integer, what base
int n,cnt=0;
	cin>>n;
	for(int i=1;i<=n;i++)cnt+=!f(i,8)&&!f(i,10);
	cout<<cnt<<endl;

// ways to cut bar from 11 // |o|oo| <- length 3 cut into size 1 and 2 
x=1;
	cin>>l;//length 13
	for(i=1;i<=11;i++){ // 1 
		x*=(l-i); // length - 2 = 13-2 = 11
		x/=i; //11/2 
	}
