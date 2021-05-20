int N, H[101010];
bool checked[101010];
//---------------------------------------------------------------------------------------------------
void _main() {
    cin >> N;
    rep(i, 0, N) cin >> H[i];

    int ans = 0;
    rep(i, 0, N) if(!checked[i]) {
        checked[i] = true;
        rep(j, i + 1, N) {
            if(H[j - 1] < H[j])
                break;
            checked[j] = true;
            chmax(ans, j - i);
        }
    }
    cout << ans << endl;
}
