// multiplication table reaching destination 
// 10 -> (2,5) -> (2,5) requires 5 moves 
for ( ll i =1 ; i*i <=n ; i++)
   if(n%i != 0 ) continue l; 
    ll j = n/i; ans = min(ans ,i+j-2)
      cout << ans ; 
