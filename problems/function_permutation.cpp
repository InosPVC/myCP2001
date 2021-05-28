// abc -> 6 通り全探索
  string s;
    cin >> s;
    do {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));
    return 0;
