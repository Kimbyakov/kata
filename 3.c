#include <stdio.h>

int main(void){
	int firstNumber, secondNumber,sum;
	printf("Put num: ");
	scanf("%d %d", &firstNumber, &secondNumber);
	
	sum = firstNumber + secondNumber;

	printf("%d + %d = %d\n", firstNumber, secondNumber, sum);

	return 0;
}
