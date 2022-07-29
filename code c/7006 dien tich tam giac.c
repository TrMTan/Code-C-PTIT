#include<stdio.h>
#include<math.h>
 
double canh(double x1, double y1, double x2, double y2) {
	return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}
 
int ktra(double ab, double ac, double bc) {
	if(ab >= ac + bc || ac >= ab + bc || bc >= ab + ac) return 0;
	return 1;
}
 
double dientich(double ab, double ac, double bc) {
	return (sqrt((ab + ac + bc) * (ab + ac - bc) * (ab - ac + bc) * (bc - ab + ac)))/4;
}
 
int main () {
	int t;
	scanf("%d", &t);
	while(t--) {
		double x1, y1, x2, y2, x3, y3;
		scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);
		double ab = canh(x1, y1, x2, y2);
		double ac = canh(x1, y1, x3, y3);
		double bc = canh(x2, y2, x3, y3);
		if(ktra(ab, ac, bc)) printf("%.2lf\n", dientich(ab, ac, bc));
		else printf("INVALID\n");
	}
	return 0;
}


