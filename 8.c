#include <stdio.h>

int main(void){
	int a;
	long b;
	long long c;

	double e;
	long double f;

	printf("Size int: %ld\n", sizeof(a));
	printf("Size long = %ld\n", sizeof(b));
	printf("Size long long = %ld\n", sizeof(c));

	printf("Size double: %ld\n", sizeof(e));
	printf("Size long double: %ld\n", sizeof(f));

	return 0;
}
