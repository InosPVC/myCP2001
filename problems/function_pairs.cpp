// insert 1st and second 
vector< pair <long long , int> > f(n);
	rep(i, n) {
		cin >> f[i].first >> f[i].second;
	}
// sort by 1st pair
	sort(f.begin(), f.end());
