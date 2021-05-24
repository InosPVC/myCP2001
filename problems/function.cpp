// del string contains with !
in.erase(remove(in.begin(), in.end(), '!'), in.end()); //remove A from string

// count x++ occurence in string 
count(a.begin() , a.end(), "x++"); 

// find substring 
string str = "04037"
str.find("7") != string::npos -> yes 

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
