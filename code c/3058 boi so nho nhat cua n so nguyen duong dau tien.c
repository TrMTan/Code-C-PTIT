#include<stdio.h>
#define ll long long
ll gcd(ll a,ll b){
	if(b == 0) return a;
	return gcd(b, a % b);
}

ll lcd(ll a, ll b){
	return a * b /gcd(a, b);
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		ll n, i;
		scanf("%lld", &n);
		ll bc = 1;
		for(i = 1; i <= n; i++){
			bc = lcd(bc, i);
		}
		printf("%lld\n", bc);
	}
}
