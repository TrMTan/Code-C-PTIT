#include<stdio.h>
#include<math.h>

long long latso(long long n){
	long long daoso = 0;
	while(n){
		daoso =  daoso* 10 + n % 10;
		n /= 10;
	}
	return daoso;
}

void check(long long n){
	int so2 = 0, so3 = 0, so5 = 0, so7 = 0;
	long long m = latso(n);
	while(n){
		int r = n % 10;
		if(r == 2) so2++;
		else if(r == 3) so3++;
		else if(r == 5) so5++;
		else if(r == 7) so7++;
		n /= 10;
	}
	while(m){
		int r = m % 10;
		if(r == 2 && so2 != 0) printf("2 %d\n", so2), so2 = 0;
		else if(r == 3 && so3 != 0) printf("3 %d\n", so3), so3 = 0;
		else if(r == 5 && so5 != 0) printf("5 %d\n", so5), so5 = 0;
		else if(r == 7 && so7 != 0) printf("7 %d\n", so7), so7 = 0;
		m /= 10;
	}
}

int main(){
	long long n;
	scanf("%lld", &n);
	check(n);
}
