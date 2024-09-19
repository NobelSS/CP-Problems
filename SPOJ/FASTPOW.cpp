#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const LL MOD=1e9+7;

LL modexp(LL b, LL e, LL m) { 
	LL r = 1;
 	while (e > 0) {
  		if ((e & 1) == 1) {
  			r = (r * b) % m;
  		}
  		e >>= 1;
  		b = (b * b) % m;
 	}
 	return (LL) r;
}

int main(){
	LL a, b, c;
	scanf("%lld %lld %lld", &a, &b, &c);
	printf("%lld\n", modexp(a, b, c));
	return 0;
}
