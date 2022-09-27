#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int x;
	
	printf("input the second : ");
	scanf("%i",&x);
	
	printf("the time for %i second is %i : %i : %i\n", x, x/3600, x/60%60, x%60);
	
	return 0;
}
