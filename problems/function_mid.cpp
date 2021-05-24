// N= A X B + C 組 N = 6  // N = (1,2,3)
for(int i=1;i<n;i++) ans += (n-1)/i;
 
// 定石: if !found print s else satified
set<string> S; while(n--){ string s; cin>>s; S.insert(s); }
	for(auto& s:S) if(S.count('!'+s)){ cout<< s <<endl; return 0; } // ?
	puts("satisfiable");
