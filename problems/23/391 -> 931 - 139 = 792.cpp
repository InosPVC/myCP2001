#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int n,k; // only n moves and initialize once 
	cin>>n>>k;
	for(int i=1;i<=k;i++){
    
		string t=to_string(n); // new = turn n string 
		sort(t.begin(),t.end());
    
		string t2=t; // new2 = turn n string 
		reverse(t2.begin(),t2.end());
    
		n=stoi(t2)-stoi(t); // turn int ( t1 -  t2)
	}	
	cout<<n;
}
