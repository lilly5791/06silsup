#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int square(int n);

int main(void)
{
	int i;
	int max = 45;
	
	srand((unsigned)time(NULL));
	
	for(i = 0; i < 6; i++)
		printf("%d ", 1 + rand()%max); // 나머지연산했으므로 (0-44)+1 중 하나 나옴 
		
	return 0;	
	
}

