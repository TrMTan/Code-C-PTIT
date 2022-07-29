#include<stdio.h>
#include<math.h>

struct tamgiac{
	int a, b, c;
	float dientich;
};

typedef struct tamgiac tamgiac;

int i, j;
void nhapcanhtamgiac(struct tamgiac x[], int n){
	for(i = 0; i < n; i++){
		scanf("%d %d %d", &x[i].a, &x[i].b, &x[i].c);
	}
}

void dientichtamgiac(struct tamgiac x[], int n){
	for(i = 0; i < n; i++){
		float p = (x[i].a + x[i].b + x[i].c)/2.0;
		x[i].dientich = sqrt(p * (p - x[i].a) * p * (p - x[i].b) * p * (p - x[i].c));
	}
}
void sapxep(struct tamgiac x[], int n){
	for(i = 0; i < n - 1; i++){
		for(j = i + 1; j < n; j++){
			if(x[i].dientich > x[j]. dientich){
				struct tamgiac tmp = x[i];
				x[i] = x[j];
				x[j] = tmp;
			}
		}
	}
}

void xuatcanhtamgiac(struct tamgiac x[], int n){
	for(i = 0; i < n; i++){
		printf("%d %d %d\n", x[i].a, x[i].b, x[i].c);
	}
}

int main(){
	int n;
	struct tamgiac x[100];
	scanf("%d", &n);
	nhapcanhtamgiac(x, n);
	dientichtamgiac(x, n);
	sapxep(x, n);
	xuatcanhtamgiac(x, n);
}
