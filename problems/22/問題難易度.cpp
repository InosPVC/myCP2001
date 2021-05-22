//結論から言うと、
// • N/2 番目に難しい問題が「ARC 用の問題」、N/2 − 1 番目に難しい問題が「ABC 用の問題」となる
// こと
//• 　「ARC 用の問題」の数と「ABC 用の問題」の数が同じになること
// は、同値であると言えます。よって、解法は以下のようになります。
//1. 　問題を難易度順に昇順でソートする。
// 2. N/2 番目の要素から、N/2 − 1 番目の要素を引いたものを出力する。

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    sort(a, a + n);
    int size = n / 2;
    cout << a[size] - a[size - 1];
    return 0;
}
