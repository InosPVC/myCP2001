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
