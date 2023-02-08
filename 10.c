#include <stdio.h>

int main(void){
	int num;
	printf("input num: ");
	scanf("%d", &num);

	if (num % 2 == 0)
		printf("%d chetnoe\n", num);
	else
		printf("%d nechetnoe\n", num);
	return 0;
}
