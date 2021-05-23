using namespace std;
int a[1000];
bool f;
int main(){
  int n,q;string s;cin>>n>>s>>q;
  for(int i=0;i<q;i++){
    int t,a,b;cin>>t>>a>>b;a--;b--;
    if(t==1)swap(s[f?n<=a?a-n:n+a:a],s[f?n<=b?b-n:n+b:b]);
    if(t==2)f^=1;
  }
  cout<<(f?s.substr(n)+s.substr(0,n):s)<<endl;
}
