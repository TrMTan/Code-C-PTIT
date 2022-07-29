#include<stdio.h>
#include<math.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		float xa, xb, xc, ya, yb, yc, ab, ac, bc, p;
		scanf("%f %f %f %f %f %f", &xa, &ya, &xb, &yb, &xc, &yc);
		ab = sqrt(pow((xb - xa), 2) + pow((yb - ya), 2));
		ac = sqrt(pow((xc - xa), 2) + pow((yc - ya), 2));
		bc = sqrt(pow((xc - xb), 2) + pow((yc - yb), 2));
		p = ab + ac + bc;
		if(ab + bc > ac && ab + ac >bc && bc + ac > ab){
			printf("%0.3f", p);
		}else{
			printf("INVALID");
		}
		printf("\n");
	}
}
