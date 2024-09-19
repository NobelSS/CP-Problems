#include<bits/stdc++.h>

int main(){
	int t, n, m;
	scanf("%d", &t);
	while(t--){
		scanf("%d %d", &n, &m);
		for(int i=n;i<=m;i++){
			int check = 0;
			for(int j=2;j*j<=i;j++){
				if(i % j == 0){
					check = 1;
					break;
				}
			}
			if (!check && i > 1) printf("%d\n", i);
		}
		puts("");
	}
	return 0;
}
