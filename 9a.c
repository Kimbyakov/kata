#include <stdio.h>

int main(void){
	double a, b, tmp;

	printf("input a: ");
	scanf("%lf", &a);

	printf("input b: ");
	scanf("%lf", &b);

	tmp = a;
	a = b;
	b = tmp;

	printf("\n After rel a = %lf, b = %lf \n", a, b);

return 0;
}

