#include<bits/stdc++.h>
using namespace std;

int main(){
    unsigned n;
    cin>>n;
    vector<unsigned> a(n);
    for(auto&i:a) cin>>i;
    unsigned ans{UINT32_MAX};
    for(int b{};b<(1<<(n-1));++b){
        unsigned x{}, tmp=a[0];
        for(int i{};i<(n-1);++i){
            if((b>>i)&1){
                x^=tmp;
                tmp=a[i+1];
            }
            else{
                tmp|=a[i+1];
            }
        }
        chmin(ans, x^tmp);
    }
    cout<<ans<<'\n';
}
