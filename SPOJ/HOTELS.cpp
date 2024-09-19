#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll getMax(ll a, ll b){
	return a > b ? a : b;
}

int main(){
	ll n, m;
	scanf("%lld %lld", &n, &m);
	int arr[n+1];	
	for(int i=0;i<n;i++){
		scanf(" %d", &arr[i]);
	}
	ll max = 0, currMax = 0;
	int start=0;
	for(int i=0;i<n;i++){
		if(currMax <= m){
			currMax += arr[i];
		}
		while(currMax > m){
			currMax-=arr[start];
			start++;
		}
		max = getMax(currMax, max);
	}
	printf("%lld\n", max);
}
