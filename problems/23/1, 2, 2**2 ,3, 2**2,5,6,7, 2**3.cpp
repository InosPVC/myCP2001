// 8--> 6
// 1, 2, 2**2 ,3, 2**2,5,6,7, 2**3  -> 乗数以外 
// bigger than 2 

//

#include<bits/stdc++.h>
using namespace std;
long n,i,j;
set<long>s;
int main(){
	cin>>n;
	for(i=2;i*i<=n;i++){ // for = 2 - 2*2 // not less than 2 
		for(j=i*i;j<=n;j*=i)s.insert(j);// 2*2 - 8 // insert integers are representable as a**b 
	}// row 4 col 8 
	cout<<n-s.size()<<"\n"; // total num - set.size  
}
