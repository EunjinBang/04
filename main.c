#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int second;
	
	printf("input the second :");
	scanf("%i", &second);
	
	printf("the time is %i : %i\n", second/60, second%60);
	
	return 0;
}
