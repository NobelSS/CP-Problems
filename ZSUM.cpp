#include<stdio.h>
typedef long long LL;
const int MOD = 10000007;

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
	LL n, k;
	
	while(true){
		scanf("%lld %lld", &n, &k);
		if(n == 0 && k == 0) break;
		LL res = modexp(n, k, MOD) + modexp(n, n, MOD) + 2 *(modexp(n-1, n-1, MOD) + modexp(n-1, k, MOD))% MOD;
		printf("%lld\n", res % MOD);
	}
	return 0;
}
