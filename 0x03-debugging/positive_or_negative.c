#include <stdio.h>

int main(void)
{
	int n;
	printf("enter number here");
	scanf("%d", &n);

	if(n > 0) {
		printf("%d is positive", n);
	}
	
	else if(n == 0) {
		prinf("%d is zero", n);
	}

	else printf("%d is negative, n");

	return(0);
}

