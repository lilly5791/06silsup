#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sumTwo(int a, int b)
{
	return a + b;
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
	
	int sum, sq = 6, m;
	int a = 2, b = 5;
	
	sum = sumTwo(a,b);
	
	printf("sumTwo : %d\n", sum);
	printf("square : %d\n", square(sq));
	printf("max : %d\n", max(a,b));
		
	
	return 0;
}
