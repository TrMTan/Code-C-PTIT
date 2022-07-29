#include<stdio.h>
#include<math.h>

int main(){
	double a, b, c, x1, x2;
	scanf("%lf %lf %lf", &a, &b, &c);
	double delta = b * b - 4 * a * c;
	x1 = (-b + sqrt(delta))/ (2 * a);
	x2 = (-b - sqrt(delta))/ (2 * a);
	if(a == 0){
		if(b == 0){
			printf("NO");
		}else{
			printf("%.2f", - c / b);
		}
	}else{
		if(delta < 0){
			printf("NO");
		}else if(delta == 0){
			x1 = x2 = - b / 2 * a;
			printf("%.2f", x1);
		}else if(delta > 0){
			printf("%.2f %.2f", x1, x2);
		}
	}
}
