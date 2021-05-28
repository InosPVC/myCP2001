// abc -> 6 通り全探索
  string s;
    cin >> s;
    do {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));
    return 0;

int main() {
    int n; cin >> n; vector<int> v(n); 
    for (int i = 0; i < n; i++) cin >> v[i]; 
     

    do {
        for (int i = 0; i < n; i++) {
            cout << v[i];
            if (i != n-1)cout << " ";
        }
        cout << endl;
    } while (next_permutation(v.begin(), v.end()));
    return 0;
}
