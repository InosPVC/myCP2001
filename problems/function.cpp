// del string contains with !
in.erase(remove(in.begin(), in.end(), '!'), in.end()); //remove A from string

// count x++ occurence in string 
count(a.begin() , a.end(), "x++"); 

// find substring 
string str = "04037"
str.find("7") != string::npos -> yes 

// sort string reverse 234 -> 432
reverse(t.begin(), t.end());

// 最終結果を固定したほうが複雑性が生まれない

// decimal to octal (base of 8) converter
string to_oct(int n){
  string s;
  while(n){
    s = to_string(n%8) + s;
    n /= 8;
  }
  return s;
}

// find digits 1-n that contains the digit 7 in decimal and octal 
#include <bits/stdc++.h>
using namespace std;
int n,a,s;
int c(int i,int m){
  while(0<i){
    if(i%m==7)return 0;
    i/=m;
  }
  return 1;
}
int main(){
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
    s+=c(i,8)&c(i,10);
  }
  printf("%d",s);
}

// prime num detector 
bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;

    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}

// find closest prime number
  int x;
  cin>>x;
 
  int p=x;
  while(!is_prime(p)) p++; 
cout << p; 
 
  }

// 2nd place by matching 2 opponents 
// 2
// 1 4 2 5
// won player = 2 (4 biggest power) 
#include <bits/stdc++.h>
using namespace std;
int main(){
  int n; cin >> n; int m = 1 << n;
  vector<pair<int,int>> a(m);
  for (int i=0; i<m; ++i){ int x; cin >> x; a[i] = {x,i+1}; }
  cout << min(*max_element(a.begin(),a.begin()+m/2),*max_element(a.begin()+m/2,a.end())).second << endl;
}

//decimal 12
    printf("%.12f\n", (double)L * L * L / 27);


// make pre element equal and lower than next element
long long  n; cin >> n; 
    long long pre = 0;
    long long cnt = 0;
    for (int i = 1; i <= n; i++) {
        long long x; cin >> x;
      
        if (x > pre) {
            pre = x; 
        }
        else {
            cnt += pre - x; 
        }
      cout << cnt ;
