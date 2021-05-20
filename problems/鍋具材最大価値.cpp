// 3
//   2 3 5 -> 2+3 /2 = a // a + 5/2 = ans 

int N; double v[50];
//---------------------------------------------------------------------------------------------------
void _main() {
    cin >> N;
    rep(i, 0, N) cin >> v[i];
    sort(v, v + N);

    double ans = v[0];
    rep(i, 1, N) ans = (ans + v[i]) / 2;
    printf("%.10f\n", ans);
}
