#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	unsigned int x;
	int b;
	
	printf("input a number : ");
	scanf("%ui",&x);
	
	for (b=0; x != 0; x >>=1)
	{
		if (x & 1)
		{
			b = b + 1;
		}
	}
	
	printf("The result is : %i\n",b);
	
	return 0;
}
