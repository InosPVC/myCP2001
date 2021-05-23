int N, A[101010], B[101010], C[101010], D[101010];
int cnt[101010];
//---------------------------------------------------------------------------------------------------
void _main() {
    cin >> N;
    rep(i, 0, N) cin >> A[i];
    rep(i, 0, N) cin >> B[i];
    rep(i, 0, N) cin >> C[i];
    rep(j, 0, N) D[j] = B[C[j] - 1];

    rep(j, 0, N) cnt[D[j]]++;
    ll ans = 0;
    rep(i, 0, N) ans += cnt[A[i]];
    cout << ans << endl;
}
