#include<stdio.h>
#include<math.h>

int sotn(int n){
	int res = 0, m = n, sum = 0, check = 0;
	while(n > 0){
		if(n % 10 == 6){
			check = 1;
		}
		sum += n  % 10;
		res = res * 10 + n % 10;
		n /= 10;
	}
	if(sum % 10 == 8 && res == m && check == 1){
		return 1;
	} 
	return 0;
}

int main(){
	int a, b, i;
	scanf("%d %d", &a, &b);
	if(a > b){
		int tmp = a;
		a = b;
		b = tmp;
	}
	for(i = a; i <= b; i++){
		if(sotn(i)){
			printf("%d ", i);
		}
	}
	return 0;
}
