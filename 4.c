#include <stdio.h>

int main(void){
	double fn, sc, pr;
	printf("input num: ");
	scanf("%lf %lf", &fn, &sc);

	pr = fn * sc;

	printf(" %lf * %lf = %.2lf\n", fn, sc, pr);
	
	return 0;
}
