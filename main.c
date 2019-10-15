#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int calCombination(int n, int r)
{
	int high, low;
	high = factorial(n);
	low = factorial(r) * factorial(n-r);
	
	return (high/low);
	
}

int factorial(int a)
{
	int res = 1, i;
	for(i = 1; i <= a; i++)
		res = res * i;	
	return res;			
}


int main(void)
{
	int n, r, res;
	
	printf("input n & r:");
	scanf("%d %d", &n, &r);
	
	res = calCombination(n, r);
	printf("%d combination %d = %d", n, r, res);

}



