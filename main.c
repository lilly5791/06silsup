#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sumTwo(int a, int b)
{
	return (a + b);
}

int square(int n)
{
	return (n*n);
}

int max(int a, int b)
{
	if (a > b)
		return (a);
	else
		return (b);	
}

int main(int argc, char *argv[]) {
	
	printf("sum is %d\n", sumTwo(8, 9));
	printf("square is %d\n", square(8));
	printf("max is %d\n", max(8, 9));	

	return 0;
}


