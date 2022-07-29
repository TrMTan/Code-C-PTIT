#include<stdio.h>
#include<math.h>

int UCLN(int a, int b){
	while(a != b){
		if(a > b) a = a - b;
		if(a < b) b = b - a;
	}
	return a;
}
int BCNN(int a, int b){
	return a / UCLN(a, b) * b;
}

struct ps{
	int tu, mau;
};

typedef struct ps ps;

//rut gon ps
ps rutgon(ps a){
	int z = UCLN(a.tu, a.mau);
	a.tu /= z;
	a.mau /= z;
	return a; 
}

//quy dong ps, tong, thuong
void solve(ps a, ps b){
	a = rutgon(a);
	b = rutgon(b);
	int mc = BCNN(a.mau, b.mau); // mau chung
	a.tu = mc / a.mau * a.tu;
	b.tu = mc / b.mau * b.tu;
	a.mau = b.mau = mc;
	printf("%d/%d %d/%d\n", a.tu, a.mau, b.tu, b.mau);
	ps tong, thuong;
	tong.tu = a.tu + b.tu;
	tong.mau = mc;
	tong = rutgon(tong);
	printf("%d/%d\n", tong.tu, tong.mau);
	thuong.tu = a.tu * b.mau;
	thuong.mau = a.mau * b.tu;
	thuong = rutgon(thuong);
	printf("%d/%d\n", thuong.tu, thuong.mau);
}
int main(){
	int t, i;
	scanf("%d", &t);
	for(i = 1; i <= t; i++){
		ps a, b;
		scanf("%d %d %d %d", &a.tu, &a.mau, &b.tu, &b.mau);
		printf("Case #%d:\n", i);
		solve(a, b);
	}
}



