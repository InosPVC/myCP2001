nt N, A[201010];
int cnt[202];
//---------------------------------------------------------------------------------------------------
void _main() {
    cin >> N;
    rep(i, 0, N) cin >> A[i];

    ll ans = 0;
    rep(i, 0, N) {
        int mo = A[i] % 200;
        ans += cnt[mo];
        cnt[mo]++;
    }
    cout << ans << endl;
}
