// how to print a map 
int n; cin >> n;   map<string, long long> box;

	rep(i, n) {
		string s; cin >> s; 
		sort(s.begin(), s.end()); 
		box[s] ++;
	}

	for (const auto& x : box) {
		std::cout << x.first << ": " << x.second << "\n";
	}
