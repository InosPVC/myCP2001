// N= A X B + C 組 N = 6  // N = (1,2,3)
for(int i=1;i<n;i++) ans += (n-1)/i;
 
// 定石: if !found print s else satified
set<string> S; while(n--){ string s; cin>>s; S.insert(s); }
	for(auto& s:S) if(S.count('!'+s)){ cout<< s <<endl; return 0; } // ?
	puts("satisfiable");

// (x+y)/2 max 
sort b
double t=b[0];
	for(int i=1;i<n;i++)
	t=(t+b[i])/2;

//10 4 8 7 3 // a[i-1] < a[i] -> NO // a[i-1] >  a[i] -> YES 
if(a[i-1]<a[i]){m=std::max(m,t);t=0;}else{t++;}

//attack survival
https://atcoder.jp/contests/abc141/tasks/abc141_c
