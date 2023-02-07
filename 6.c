#include <stdio.h>

int main(void){
	int divided, divisor, qutient, remain;

	printf("input div and divs: ");
	scanf("%d %d", &divided, &divisor);

	qutient = divided / divisor;

	remain = divided % divisor;

	printf(" result: %d\n", qutient);
	printf(" remain: %d\n", remain);

	return 0;
}

