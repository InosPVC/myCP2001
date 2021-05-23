https://www.remma.net/?p=2957
// 工夫された
// 3
// 2 8 4

//  (8-2)**2 + (4-2) **2   ..n  総和


// sig 2 - n * sig (1 -》 i-1 ) { ai-aj} **2総和
// 式変形　→　N*a1 - a2*a2;
// a1 = 8*8 + .. 
// a2 = 8 ; 

#include <bits/stdc++.h>
#include <math.h>
#include <string>
using namespace std;

int main(void) {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i=0; i<N; i++) {
        cin >> A[i];
    }

    long long ans = 0;
    long long a1 = 0;
    long long a2 = 0;
    for (int i=0; i<N; i++) {
        a1 += A[i]*A[i];
        a2 += A[i];
    }
    ans = N*a1 - a2*a2;

    cout << ans << endl;

    return 0;
}
