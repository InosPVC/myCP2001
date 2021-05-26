// chmin
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
 
https://blog.hamayanhamayan.com/entry/2019/01/08/225228

//all  dp[i] = inf;
// dp[0] = 0;
//// chmin ai+1	ai + hi - hi+1
// chmin ai+1	ai + hi - hi+2

// cout dp[N - 1] //last dp value
