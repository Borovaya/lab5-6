#include <stdio.h>
#include "library.h"

int main()
{
	float a, b, c, x1, x2;
	int fl = 100;
	printf("vvedite a, b, c: ");
	scanf("%f %f %f", &a, &b, &c);
	if (a == 0)
		printf("\n No roots!");
	else
		fl = solve(a, b, c, &x1, &x2);
	if (fl == 0)
		printf("\n No real roots!\n ");
	if (fl == 1)
		printf("Only one root: x = %.3f\n", x1);
	if (fl == 2)
		printf("Two roots: \n x1 = %.3f\n x2 = %.3f\n", x1, x2);
	return 0;
}
