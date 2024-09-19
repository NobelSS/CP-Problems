#include<bits/stdc++.h>
typedef unsigned long long ULL;

int main(){
	int t;
	ULL n;
	scanf(" %d", &t);
	while(t--){
		scanf(" %llu", &n);
		ULL sum = (n == 1) ? 0 : 1;
		int squared = floor(sqrt((double)n));
		for(ULL i=2;i<=squared;i++){
			if(n % i == 0) {
				ULL div = n / i;
				sum += i;
				if(div != n && div != i) sum += div;
			}
		}
		printf("%llu\n", sum);
	}
	return 0;
}
