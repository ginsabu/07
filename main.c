#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int inc(int counter);

int main(void) {
	int i;
	
	printf("Before Calling Function i = %d\n", i);
	inc(i);
	printf("After Calling Function i = %d\n", i);

	return 0;
}

int inc(int counter)
{
	counter++;
	return counter;
}