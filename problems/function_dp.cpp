// frog cost  
int N, H[101010], dp[101010];
//---------------------------------------------------------------------------------------------------
void _main() {
    cin >> N;
    rep(i, 0, N) cin >> H[i];
    
    rep(i, 0, N) dp[i] = inf;
    dp[0] = 0;
 
    rep(i, 0, N) {
        chmin(dp[i + 1], dp[i] + abs(H[i] - H[i + 1]));
        chmin(dp[i + 2], dp[i] + abs(H[i] - H[i + 2]));
    }
 
    cout << dp[N - 1] << endl;
}
