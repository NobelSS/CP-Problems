#include<stdio.h>
int a[1000001]={0};
	
int main(){
    int n, m, w, l, r;
    scanf("%d %d %d", &n, &m, &w);
    while(n--){
    	scanf("%d %d", &l, &r);
    	a[l]++;
    	a[r+1]--;
    }
    for(int i=0;i<=w;i++){
    	a[i] += a[i-1];
    }
    while(m--){
    	scanf("%d", &l);
    	printf("%d\n", a[l]);
    }
    return 0;
} 
