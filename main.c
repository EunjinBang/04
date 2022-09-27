#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	int x, y, z, m;
	int a, b, c;
	x = 1;
	z = 5;
	a = 3;
	b = 4;
	c = 5;
	y = a*x*x + b*x + c;
	m = (x + y + z)/3;
	printf("y=%d, m=%d", y, m);
	
	return 0;
}
