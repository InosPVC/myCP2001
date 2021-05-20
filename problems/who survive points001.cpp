// [3,3,3,3,3] k =3 left = [1,0,0,0] , a[0] =  win , a[1] = lose 
#include <bits/stdc++.h>
using namespace std;
int main()
  {int N, K, Q, A; cin >> N >> K >> Q; // num players 
  vector<int> P(N, K - Q); while (cin >> A) ++P[--A]; // a[k,k,k,kpoints]
  for (int p : P) puts(p > 0 ? "Yes" : "No");}// [2>0, -1<0]
