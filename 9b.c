#include <stdio.h>

int main(void){
	double a,b;

	printf("input a: ");
	scanf("%lf", &a);

	printf("input b: ");
	scanf("%lf", &b);

	a = a - b;

	b = a + b;

	a = b - a;

	printf("After rel a = %lf, b = %lf\n", a, b);

	return 0;

}
