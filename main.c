#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int number_1;
	int number_2;
	printf("input two integers : ");
	scanf("%i %i",&number_1, &number_2);
	
	printf("+ result is %d\n ", number_1 + number_2);
	printf("- result is %d\n", number_1 - number_2);
	printf("* result is %d\n", number_1 * number_2);
	printf("/ result is %d\n", number_1 / number_2);
	printf("%% result is %d\n", number_1 % number_2);
	return 0;
}
