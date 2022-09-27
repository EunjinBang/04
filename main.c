#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int year;
	
	printf("input the year :");
	scanf("%i", &year);
	
	if ((year%4 == 0 && year%100 != 0)|| year%400 == 0)
		printf("%i is leap year\n", year);
	else 
		printf("%i is not leap year\n", year);
	
	return 0;
}
