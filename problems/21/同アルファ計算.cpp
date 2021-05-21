long long n,a=0;
	string s;
	map<string,int> m;
	cin>>n;
	while(n--){cin>>s; sort(s.begin(),s.end()); a+=m[s]++;}
	cout<<a;
